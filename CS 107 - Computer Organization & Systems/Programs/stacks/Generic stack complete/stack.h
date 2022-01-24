#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
    void* elems;
    int loglength;
    int alloclength;
    int elemSize;
    void(*freefn)(void*);
}stack;

void stringFree(void*);
void stackNew(stack *s, int elemSize, void(*freefn)(void*));
void stackDispose(stack *s);
void stackPush(stack *s, void *elemAddr);
void stackPop(stack *s, void *elemAddr);