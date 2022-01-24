#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(void *a, void *b, int size)
{
    char buffer[size];
    memcpy(buffer,a,size);
    memcpy(a,b,size);
    memcpy(b,buffer,size);
}

int main()
{
    /*
    int a,b
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b,sizeof(a));
    printf("After swapping a = %d and b = %d.\n",a,b);
    */
    char a[10],b[10];
    printf("Enter a: ");
    scanf("%s",a);
    printf("Enter b: ");
    scanf("%s",b);
    swap(a,b,sizeof(a));                    // a itself holds address
    printf("After swapping a = %s and b = %s.\n",a,b);  

    /*
     Enter a: hello
    Enter b: husk
    After swapping a = husk and b = hello.

    */
}