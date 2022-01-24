#include<stdio.h>
#include<stdlib.h>


int binsearch(int array[], int size, int key)
{
    int start=0,end=size-1,middle;           //start from 0 ,end = size -1 - > last index
    while(start <= end)
    {
        middle=(start+end)/2;
        if(array[middle] == key)           //if middle element is the key return
        {
            return middle;
        }
        else if(array[middle] > key)          // if middle element is greater so our element must at the left side -> start 0, end at middle
        {
            end = middle;
        }
        else if(array[middle] < key)
        {
            start = middle+1;             //if middle is less - must be at right side start at middle+1 end at last end (size-1)
        }
    }
    return -1;
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

    int found =binsearch(array,n,key);

    if(found != -1)
    {
        printf("Element found at index %d.\n",found+1);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}