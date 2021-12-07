#include<stdio.h>
#include<stdlib.h>

int main()
{
    short s=1;
    char c=*(char *)&s;
    printf("%d %d\n",(char)s,c);
}