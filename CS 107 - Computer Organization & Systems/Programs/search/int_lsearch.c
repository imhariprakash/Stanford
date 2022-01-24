#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int intcmp(const void *ptr1, const void *ptr2)
{
    int *ip1 = (int*)ptr1;
    int *ip2 = (int*)ptr2;   //only for int comparison
    return (*ip1 - *ip2);
}

void* lsearch(void* array, int size, void *key, int elemSize, int(*cmpfn)(const void*, const void*))
{
    for(int i=0;i<size;i++)
    {
        void *elemAddr = (char*)array + i*elemSize;
        if(cmpfn(elemAddr,key) == 0)
            return elemAddr;
        printf("%d\n",cmpfn(elemAddr,key));
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
    int* found = (int*)lsearch(array,n,&key,sizeof(array[0]),intcmp);
    if(found)
    {
        printf("\nElement found at index %d.\n",(int)(found - array)+1);
    }
    else
    {
        printf("\nNot found.\n");
    }
    return 0;
}