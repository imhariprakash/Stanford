#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
    void* elems;
    int loglength;
    int alloclength;
    int elemSize;
}stack;

void stackNew(stack *s, int elemSize);
void stackDispose(stack *s);
void stackPush(stack *s, void *elemAddr);
void stackPop(stack *s, void *elemAddr);