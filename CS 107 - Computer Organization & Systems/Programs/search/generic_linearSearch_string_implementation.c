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

    char key,*ptr,array[100],temp;
    printf("Enter the string: ");
    scanf("%s",array);
    scanf("%c",&temp);  //buffer collection
    printf("Enter the key: ");
    scanf("%c",&key);
    ptr=(char*)linsearch(array, (int)sizeof(array), (int)sizeof(array[0]), &key, charcmp);
    if(ptr)
        printf("\nIndex found at %d.\n",(int)(ptr-array)+1);
    else
        printf("\nElement not found.\n");
    
}