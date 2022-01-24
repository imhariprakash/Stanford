#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


// int intcmp(void* ptr1, void* ptr2)
// {
//     return(*(int*)ptr1 - *(int*)ptr2);
// }

int charcmp(void *a, void *b)
{
    // if(*(char*)a == *(char*)b)
    // {
    //     return 0;                     // i am using binary search -> so need to adjust middle accordingly so - +ve,-ve ,zero important
    // }
    // return -1;
    return(*(char*)a - *(char*)b);
}


void* bisear(const void *array,int size,int elemSize,void* key,int (*cmpfn)(void*, void*))
{
    int start = 0, end = size-1;
    while(end >= start)
    {
        int middle = ((end + start)/2);
        int i = cmpfn(((char*)array+middle*elemSize),key);
        printf("%d %d %d %d \n",i,start,end,middle);                    //for debugging
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
   printf("\nEnter the key: ");
   scanf("%c",&key);

    printf("%c %c %c %c %c %c %c %c\n",array[0],array[1],array[2],array[3],array[4],array[5],array[6],array[7]);

   char* found = (char*)bisear(array,n,sizeof(char),&key,charcmp);    //with strings not  int* - 4bytes -> char * -> 1 bytes -> so new function needed
   if(found)
   {
       printf("\nFound at index %d.\n",(int)(found-array)+1);
   }
   else
   {
       printf("\nNot found.\n");
   }
   return 0;
}