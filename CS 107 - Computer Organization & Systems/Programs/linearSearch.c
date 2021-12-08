#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int lsearch(int arr[],int key,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return 0;
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int isKey=lsearch(arr,8,8);
    if(isKey)
    {
        printf("%d\n",isKey);
    }
    else
        printf("Not found\n");
}