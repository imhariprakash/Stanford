#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include "stack.h"


void stringFree(void* elem)
{
    free(*(char**)elem);       //since passing pointer of pointer pointing char string -> dereference and give address of array to free
}


void stackgrow(stack *s)
{
    s -> alloclength *=2;
    s -> elems = realloc(s -> elems, s -> alloclength * s -> elemSize);
    assert(s -> elems != NULL);
}


void stackNew(stack *s, int elemSize, void(*freefn)(void*))
{
    s -> loglength = 0;
    s -> alloclength = 4;
    s -> elemSize = elemSize;
    s -> elems = malloc( s -> alloclength * s-> elemSize);
    s -> freefn = freefn;
    assert(s -> elems != NULL);
}

void stackDispose(stack *s)
{
    if(s -> freefn != NULL)
    {
        for(int i=0; i < s -> loglength; i++)
        {
            s -> freefn((char*)s -> elems + i * s -> elemSize);
        }
    }
    free(s -> elems);                  //incomplete for now forget char** topics
}

void stackPush(stack *s, void* elemAddr)
{
    if(s -> loglength == s -> alloclength)
    {
        stackgrow(s);
    }
    void *dest = (char*)s -> elems + (s -> loglength * s -> elemSize);
    memcpy(dest, elemAddr, s -> elemSize);
    s -> loglength++;
}


void stackPop(stack *s, void *elemAddr)
{
    assert(s -> loglength != 0);
    s -> loglength--;
    void* source = (char*)s -> elems + (s -> loglength * s -> elemSize);
    memcpy(elemAddr, source, s -> elemSize);
}
   



int main()
{
    stack stringStack;
    stackNew(&stringStack, sizeof(char*), stringFree);
    char * friends[] = {"Al", "Bob", "Carl"};
    for(int i=0; i < 3; i++)
    {
        char* name = strdup(friends[i]);
        stackPush(&stringStack, &name);    // i need to copy address of the string in the pointer
        //i cant free name now -> data will be used by stringStack
    }
    char *name;
    for(int i=0; i < 3; i++)
    {
        stackPop(&stringStack, &name);
        printf("%s\n",name);
        free(name);
    }
    stackDispose(&stringStack);
}

