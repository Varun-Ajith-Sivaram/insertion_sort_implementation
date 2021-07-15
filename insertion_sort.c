#include<stdio.h>

#define size 10  //size of array is initialized to 10

int Insertion_sort(int[]);

void main()
{
    int a[size];
    
    printf("\tInsertion Sort Implementation\n");
    
    printf("\nEnter the elements: \n");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nElements before sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    Insertion_sort(a);
    
    printf("\nElements after sorting: ");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}


int Insertion_sort(int a[])
{
    int i,j,key;
    
    for(i=0;i<size;i++)
    {
        key=a[i];
        j=i-1;
        
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        
        a[j+1]=key;
    }
}
