#include<stdio.h>

void display_list(int array[ ], int n) // Function to display the array elements
{
	int i;
	
	printf("[ ");
	for(i = 0 ; i < n ; i++)
	{
		printf("%d ", array[i]);
	}
	printf("]\n");
}

void insertion_sort(int array[ ], int n) // Function to sort the array elements in ascending order by using Insertion Sort
{
	int i, value, hole;
	
	for(i = 1 ; i < n ; i++)
	{
      		value = array[i];
      		hole = i;
      		
      		while((hole > 0) && (array[hole - 1] > value))
      		{
      			array[hole] = array[hole - 1];
      			hole--;
      			printf("Number Moved = %d\n", array[hole]);
      		}
      		array[hole] = value;
      		printf("Number Inserted = %d\n", array[hole]);
      		printf("Insertion no. %d : ", i);
      		display_list(array, n);
   	}
}

void main()
{
	int array[100], n, i;
	
	printf("Please, Enter the number of elements you want to insert in the array : ");
	scanf("%d", &n);
	
	printf("Please, Enter the elements you want to insert in the array :\n");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("Array (Before sorting) : ");
	display_list(array, n);
	
	insertion_sort(array, n);
	
	printf("Array (After sorting) : ");
	display_list(array, n);
}
