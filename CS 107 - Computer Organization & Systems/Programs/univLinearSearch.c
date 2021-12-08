#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void * lsearch(void * arr,void* key,int size,int elemSize)
{
    int i;
    for(i=0;i<size;i++)
    {
        void * elem=arr+i*elemSize;
        if(memcmp(elem,key,elemSize) ==0)
            return elem;
    }
    return 0;
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8},key=9;
    int* isKey=(int *)lsearch(arr,&key,8,sizeof(arr[0]));
    if(isKey)
    {
        printf("%d\n",*isKey -1);
    }
    else
        printf("Not found\n");
}