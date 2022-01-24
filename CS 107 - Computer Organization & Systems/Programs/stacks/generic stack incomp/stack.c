#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include "stack.h"

void stackgrow(stack *s)
{
    s -> alloclength *=2;
    s -> elems = realloc(s -> elems, s -> alloclength * s -> elemSize);
    assert(s -> elems != NULL);
}


void stackNew(stack *s, int elemSize)
{
    s -> loglength = 0;
    s -> alloclength = 4;
    s -> elemSize = elemSize;
    s -> elems = malloc( s -> alloclength * s-> elemSize);
    assert(s -> elems != NULL);
}

void stackDispose(stack *s)
{
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
    int choice,value;
    stack s;
    stackNew(&s, sizeof(int));
    printf("\n1. push  2. pop  -1. quit\n");
    do
    {
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            printf("\nEnter the value: ");
            scanf("%d",&value);
            stackPush(&s, &value);
        }
        else if(choice == 2)
        {
            stackPop(&s, &value);
            printf("Popped number: %d.",value);
        }
    }while(choice != -1);

    stackDispose(&s);


}