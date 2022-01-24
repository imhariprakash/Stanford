#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int intcmp(void* ptr1, void* ptr2)
{
    int *id1 = (int*)ptr1;
    int *id2 = (int*)ptr2;
    return(*id1 - *id2);
}


void* bisear(void *array,int size,int elemSize,void* key,int (*cmpfn)(void*, void*))
{
    void* start = (void*)array;
    void* end = (void*)((char*)array + (size-1)*elemSize);
    while(end >= start)
    {
        //dont use these many pointers - pointer aritmetic - goes wrong.

        void* middle = (void*)((char*)start+(((unsigned long)end - (unsigned long)start)/(2*elemSize))*elemSize);         //all pointers are four bytes so as int
        printf("%d ",*(int*)middle);
        int i = cmpfn(middle,key);
        printf("%d %ld %ld %ld\n",i,(long)((start-array)/4),(long)((end-array)/4),(long)((middle-array)/4));

        //coredump why - array may be 12 bytes more -> index -> our case adding 4byte value and 4 byte value -> lot lot distant from 
        //ususal array start -> core dumped -> do it in normal way -> good job

        if(i == 0)
        {
            return((void*)middle);
        }
        else if(i > 0)
        {
            end = (void*)middle;
        }
        else if(i < 0)
        {
            start =(void*)((char*)middle + 1*elemSize);
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