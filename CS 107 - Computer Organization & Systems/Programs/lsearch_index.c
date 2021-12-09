#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int univ_lsearch(void* array,void* key,int elemSize,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        void* elem=array+i*elemSize;
        if(memcmp(key,elem,elemSize)==0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5},b=5;
    int c=univ_lsearch(a,&b,sizeof(a[0]),5);
    if(c!=-1)
    printf("Found at %d index.\n",c);
    else
    printf("Not found\n");
}