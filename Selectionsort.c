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

/*
Output
Enter the size of arrray: 5
Enter the elements of array: 
 Enter the 1 element:  8
 Enter the 2 element:  3
 Enter the 3 element:  6
 Enter the 4 element:  7
 Enter the 5 element:  5
 Array in 1 Iteration	 8	 3	 6	 7	 5
 Array in 2 Iteration	 3	 8	 6	 7	 5
 Array in 3 Iteration	 3	 5	 8	 7	 6
 Array in 4 Iteration	 3	 5	 6	 8	 7
 Array in 5 Iteration	 3	 5	 6	 7	 8
 Sorted array is ---------
	 3	 5	 6	 7	 8
     /*
