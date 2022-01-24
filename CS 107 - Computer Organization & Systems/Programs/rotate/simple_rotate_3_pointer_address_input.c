#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void rotate(void* start, void* middle, void* end)
{
    int frontSize = (char*)middle - (char*)start;
    int backSize = (char*)end - (char*)middle;
    char buffer[frontSize];
    memcpy(buffer,start,frontSize);
    memmove(start,middle,backSize);
    memcpy((char*)end - frontSize, buffer, frontSize);
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    char b[]="abcdefghi";
    //rotate((int*)a,(int*)a+4,(int*)a+9);
    rotate((char*)b,(char*)b+4,(char*)b+9);      //weak spot: rotate only by portion - so that portion must be less than or eqaul to array size
    //note:     4 shift means   middle -> array+4  -> pointer arith -> arr+4  -> must be with in array -> else -> wont work  -> not circular rotate
    // for(int i=0;i<9;i++)
    //     printf("%d  ",a[i]);
    for(int i=0;i<9;i++)
        printf("%c  ",b[i]);
    printf("\n");
}