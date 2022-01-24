#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int StrCmp(void* ptr1, void* ptr2)
{
    char* str1 = *(char**)ptr1;
    char* str2 = *(char**)ptr2;
    return(strcmp(str1,str2));   //compare using strcmp.
}


void *lsearch(void *array, int size, int elemSize, void *key, int (*cmpfn)(void* , void*))
{
    for(int i=0;i<size;i++)
    {
        void* elemAddr = (char*)array + i*elemSize;
        if(cmpfn(elemAddr,key)==0)
        {
            return elemAddr;
        }
    }
    return NULL;
}


int main()
{
    int n,i;
    printf("Enter the number of words: ");
    scanf("%d",&n);
    char *array[n],*key,temp[10];
    for(i=0;i<n;i++)
    {
        printf("Enter word %d: ",i+1);
        scanf("%s",temp);             //pointer -> so i need to give address not the string itself - but store somewhere return address
        array[i]=strdup(temp);                
    }
    printf("\nEnter the key: ");
    scanf("%s",temp);
    key = temp;
    //char key* -> the get using temp[10] -> them strdup(temp) assign to key -> else directly use temp

    //printf("%s %s %s %s %s %s\n",key,array[0],array[1],array[2],array[3],array[4]);

    char** found = (char**)lsearch(array,n,sizeof(char*),&key,StrCmp);
    //printf("Found at index %d.\n",(int)(found-(int)(&array[0]))+1);  - not working - since char** can't be converted to int
    //why char** -> going to return elemAddr -> 

    if(found == NULL)
    {
        printf("Not found.\n");
    }    
    else
    {
        printf("Found at %d.\n",(int)(found-array)+1);
    }
}