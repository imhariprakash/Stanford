#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void* lsearch(void* array, int size, void *key, int elemSize)
{
    for(int i=0;i<size;i++)
    {
        void *elemAddr = (char*)array + i*elemSize;
        if(memcmp(elemAddr,key,elemSize) == 0)
            return elemAddr;
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
    int* found = (int*)lsearch(array,n,&key,sizeof(array[0]));
    if(found)
    {
        printf("\nElement found at index %d.\n",(int)(found - array)+1);
    }
    else
    {
        printf("\nNot found.\n");
    }
    return 0;

/*

   int n,i;
   char key,temp;
   printf("Enter the number of characters: ");
   scanf("%d",&n);
   scanf("%c",&temp);  //buffer clear for \n
   char array[n];
   for(i=0;i<n;i++)
   {
       printf("Enter element %d: ",i+1);
       scanf("%c",&array[i]);
       scanf("%c",&temp);   //buffer clear
   }
   printf("Enter the key: ");
   scanf("%c",&key);
   //int tem = memcmp(array,&key,1);
   //printf("%d\n",tem);
   char* found = (char*)lsearch(array,n,&key,sizeof(array[0]));
   if(found)
   {
       printf("\nFound at index %d.\n",(int)(found-array)+1);
   }
   else
   {
       printf("\nNot found.\n");
   }
   return 0;

   */
}






















