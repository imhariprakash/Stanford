#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(void* ptr1, void* ptr2, int size)
{
    char temp[size];
    memcpy(temp,ptr1,size);
    memcpy(ptr1,ptr2,size);
    memcpy(ptr2,temp,size);
}

int main()
{
    char *husband = strdup("Fred");    //Fredncbcnxkmcnvcnxmzncbvcnx
    char *wife = strdup("Wilma");      //Wilmafnvbcxjxchbvgcjxjcnhvb      still works - so can use husband - array pointer.
    //swap(husband,wife,sizeof(char*));     -> still works
    swap(&husband,&wife,sizeof(char*));    //use common pointer instead of array one - &husband means husband array pointer - that pointers address.
    printf("%s %s\n",husband,wife);


/*    
    int a,b;
    float c,d;
    char e,f,temp;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    swap(&a,&b,sizeof(a));
    printf("After swap: a= %d, b= %d.\n\n",a,b);
    printf("Enter c: ");
    scanf("%f",&c);
    printf("Enter d: ");
    scanf("%f",&d);
    swap(&c,&d,sizeof(c));
    printf("After swap: c= %f, d= %f.\n\n",c,d);
    printf("Enter e: ");
    scanf("%c",&temp);                //buffer \n removal
    scanf("%c",&e);
    scanf("%c",&temp);                //buffer \n removal
    printf("Enter d: ");
    scanf("%c",&f);
    scanf("%c",&temp);                //buffer \n removal
    swap(&e,&f,sizeof(e));
    printf("After swap: e= %c, f= %c.\n",e,f);

    */

}