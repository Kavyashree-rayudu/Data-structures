#include<stdio.h>
void main()
{
    int arr[20],size,i, j, temp;
    printf("Enter the size of arrray: ");
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(i=0;i<size;i++)
    {
        printf("\n Enter the %d element:  ",i+1);
        scanf("%d",&arr[i]);
    }
    
    /*  Code for Selection Sort */
    for (i=0; i <size; i++)
    {
    printf("\n Array in %d Iteration",i+1);
    for(j=0;j<size;j++)
    printf("\t %d",arr[j]);
    for(j=i;j<size;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    // End of Selection Sort 
    printf("\n Sorted array is ---------\n");
    for(i=0;i<size;i++)
    printf("\t %d",arr[i]);
}
