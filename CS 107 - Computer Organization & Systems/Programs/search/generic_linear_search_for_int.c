#include<stdio.h>
#include<stdlib.h>


int intcmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int charcmp(const void *a, const void *b)
{
    if(*(char*)a == *(char*)b)
    {
        return 0;
    }
    return -1;
}

//we have a generic comparing function - let the user use an inbuilt compare function based on the type they are using.

void *linsearch(void *array, int numElem, int elemSize, void *key, int(*cmpfun)(const void * ,const void * ))  
{
    for(int i = 0; i < numElem; i++)
    {
        void *elemAdd = (char*)array + elemSize * i;
        if(cmpfun(elemAdd, key) == 0)
        {
            return elemAdd;
        }
    }
    return NULL;
}


int main()
{
    int n,i,key,*ptr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int array[n];

    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\nEnter the key: ");
    scanf("%d",&key);

    ptr=(int*)linsearch(array, n, sizeof(array[0]), &key, intcmp);
    if(ptr)
        printf("\nIndex found at %d.\n",(int)(ptr-array));
    else
        printf("\nElement not found.\n");
}