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

void bubble_sort(int array[ ], int n) // Function to sort the array elements in ascending order by using Bubble Sort
{
	int itr, i, temp, swap_check;
	
	for(itr = 1 ; itr < n ; itr++)
	{
		swap_check = 0;
		
		for(i = 0 ; i < n - itr ; i++)
		{
			printf("Elements being compared : ( %d, %d )\n", array[i], array[i + 1]);
			if(array[i] > array[i + 1])
			{
				swap_check = 1;
				
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				
				printf("Swapped elements : ( %d, %d )\n", array[i], array[i + 1]);
			}
		}
		printf("Iteration no. %d :\n", itr);
		display_list(array, n);
		
		if(swap_check == 0)
		{
			break;
		}
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
	
	bubble_sort(array, n);
	
	printf("Array (After sorting) : ");
	display_list(array, n);
}
