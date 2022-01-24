#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
//this takes 3 int arguments - 1 extra - elemSize

void rotate(void* start, int size, int elemSize, int shift)
{
    // up to first n bytes (4 bytes) -> copy them in buffer and copy that 4 in last 4 of array
    int firstBlock = shift * elemSize;  // if shift =5 first 20 bytes need to be copied to temp if its int
    int remBlock = (size-shift)*elemSize;
    char buffer[firstBlock];
    memcpy(buffer,start,firstBlock);
    memmove(start, (char*)start + firstBlock, remBlock);
    memcpy((char*)start + size * elemSize - firstBlock, buffer, firstBlock);
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    rotate(a,9,sizeof(int),5);
    for(int i=0 ;i<9; i++)
        printf("%d  ",a[i]);
    printf("\n");
}