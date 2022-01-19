#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* a[1];
    printf("Enter a string: ");
    scanf("%s",*a);
    printf("%s\n",*a);
}

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getWords(char** array,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter the word %d : ",i+1);
        scanf("%s",*(array+i));
        printf("%s",*(array+i));
    }
}


int main()
{
    int size;
    printf("Enter the number of words: ");
    scanf("%d",&size);
    char* arr[size];
    getWords(arr,size);
}

*/