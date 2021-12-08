#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void * univSearch(void* array,void* key,int size,int elemSize)
{
    int i;
    for(i=0;i<size;i++)
    {
        void* element=array+i*elemSize;
        if(memcmp(element,key,elemSize)==0)
        {
            return element;
        }
    }
    return NULL;
}

int main()
{
    int arr1[]={1,2,5,4,3},key1=3;
    float arr2[]={1.1,2.2,3.3,4.4,5.5},key2=2.2;
    double arr3[]={1.2,2.3,3.4,4.5,5.6},key3=5.6;
    int *a=(int *)univSearch(arr1,&key1,5,sizeof(arr1[0]));
    printf("%d\n",*a -1);
    float *b=(float *)univSearch(arr2,&key2,5,sizeof(arr2[0]));  // since void * will be of type (float*)
    printf("%f\n",(*b -1));
    double *c=(double *)univSearch(arr3,&key3,5,sizeof(arr3[0]));
    printf("%lf\n",(*c -1));
}

//prints the element if found.