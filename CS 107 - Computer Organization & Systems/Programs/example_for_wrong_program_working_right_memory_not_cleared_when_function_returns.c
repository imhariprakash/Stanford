#include<stdio.h>

void declare()
{
    int array[100];
    int i;
    for(i=0;i<100;i++)
    {
        array[i]=i;
    }
}

void print()
{
    int array[100];
    int i;
    for(i=0;i<100;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}



int main()
{
    declare();
    print();
}