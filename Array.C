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
    /*  Code for Bubble Sort */
    for (i=0; i <size; i++)
    {
    for(j=0;j<size - i -1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    // End of Bubble Sort 
    printf("\n Sorted array is ---------\n");
    for(i=0;i<size;i++)
    printf("\t %d",arr[i]);
}


/*
Output:
/tmp/0rFdIL4LAG.o
Enter the size of arrray: 5
Enter the elements of array: 
 Enter the 1 element:  7
 Enter the 2 element:  9
 Enter the 3 element:  6
 Enter the 4 element:  5
 Enter the 5 element:  2
 Sorted array is ---------
	 2	 5	 6	 7	 9
     /*
