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


int main()
{
    char *key1,*key2,temp[10];
    printf("Enter word: ");
    scanf("%s",temp);
    key1=strdup(temp);
    printf("Enter word: ");
    scanf("%s",temp);
    key2=strdup(temp);
    printf("%s %s\n",key1,key2);
    
    printf("%d\n",StrCmp(&key1,&key2));
}