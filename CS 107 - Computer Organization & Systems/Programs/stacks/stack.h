#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int alloclength;
    int loglength;
    int *elems;
}stack;

void stackNew(stack *s);
void stackDispose(stack *s);
void stackPush(stack *s, int value);
int stackPop(stack *s);