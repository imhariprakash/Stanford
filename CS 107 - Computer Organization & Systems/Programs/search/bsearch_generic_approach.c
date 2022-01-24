#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int intcmp(void* ptr1, void* ptr2)
{
    return(*(int*)ptr1 - *(int*)ptr2);
}


void* bisear(void *array,int size,int elemSize,void* key,int (*cmpfn)(void*, void*))
{
    int start = 0, end = size-1;
    while(end >= start)
    {
        int middle = ((end + start)/2);
        int i = cmpfn(((char*)array+middle*elemSize),key);
        //printf("%d %d %d %d\n",i,start,end,middle);                    //for debugging
        if(i == 0)
        {
            return((void*)(array+middle*elemSize));
        }
        else if(i > 0)
        {
            end = middle;
        }
        else
        {
            start = middle+1;
        }
    }
    return NULL;
}


int main()
{
    int n,i,key;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the key: ");
    scanf("%d",&key);

    int* found =(int*)bisear(array,n,(int)sizeof(int),&key,intcmp);

    if(found)
    {
        printf("Element found at index %d.\n",(int)(found-array)+1);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}