#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


// int intcmp(void* ptr1, void* ptr2)
// {
//     return(*(int*)ptr1 - *(int*)ptr2);
// }

// int charcmp(void *a, void *b)
// {
//     // if(*(char*)a == *(char*)b)
//     // {
//     //     return 0;                     // i am using binary search -> so need to adjust middle accordingly so - +ve,-ve ,zero important
//     // }
//     // return -1;
//     return(*(char*)a - *(char*)b);
// }

int StrCmp(void* ptr1, void* ptr2)
{
    char* str1 = *(char**)ptr1;
    char* str2 = *(char**)ptr2;
    return(strcmp(str1,str2));   //compare using strcmp.
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

    char** found = (char**)bisear(array,n,sizeof(char*),&key,StrCmp);
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
    return 0;
}



/*
Enter the number of words: 10
Enter word 1: aa
Enter word 2: bb
Enter word 3: cc
Enter word 4: dd
Enter word 5: ee
Enter word 6: ff
Enter word 7: ggh
Enter word 8: hhh
Enter word 9: iiiiii
Enter word 10: jjjjjjj


*/


// important - need to be sorted before searching