#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include<assert.h>

void stackNew(stack* s)
{
    s -> loglength =0;
    s -> alloclength =4;
    s -> elems = malloc(4*sizeof(int));
    assert(s -> elems != NULL);
}

void stackDispose(stack *s)
{
    free(s -> elems);
}

void stackPush(stack *s, int value)
{
    if(s -> loglength == s -> alloclength)
    {
        s -> alloclength *= 2;
        s -> elems = realloc(s -> elems, s -> alloclength);
        assert(s -> elems != NULL);
    }
    s -> elems[s -> loglength] = value;
    s -> loglength++;
}

int stackPop(stack *s)
{
    assert(s -> loglength > 0);
    s -> loglength--;
    return(s -> elems[s -> loglength]);
}

int main()
{
    int option,value;
    printf("\n1.Push  2.Pop -1.exit\n");
    stack s;
    stackNew(&s);
    do
    {
        printf("Enter option: ");
        scanf("%d",&option);
        if(option == 1)
        {
            printf("Enter the value to push: ");
            scanf("%d",&value);
            stackPush(&s,value);
        }
        else if(option == 2)
        {
            value=stackPop(&s);
            printf("popped value is %d.\n",value);
        }
    }while(option != -1);
    
}