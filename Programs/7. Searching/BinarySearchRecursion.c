#include<stdio.h>

void selection_sort(int n, int array[ ]) // Function to sort the array in ascending order using selection sort
{
	int i, j, temp;
	
	for(i = 0 ; i < n-1 ; i++)
	{
		for(j = i+1 ; j < n ; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int binary_search(int array[ ], int search, int first, int last) // Function to search any element in the array using binary search (with recursion)
{
	int mid, index = -1;
	if(first <= last)
	{
		mid = (first + last) / 2;
		if(array[mid] == search)
		{
			return mid;
		}
		else if(array[mid] > search)
		{
			last = mid - 1;
			index = binary_search(array, search, first, last);
		}
		else
		{	
			first = mid + 1;
			index = binary_search(array, search, first, last);
		}
		
	}
	return index;
}

void main()
{
	int n, array[100], search, i, index;
	
	printf("Please, Enter the number of elements you want to insert in the array : ");
	scanf("%d", &n);
	
	printf("Please, Enter the elements to be enterd in the array :\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("Array = [ ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("]\n");
	
	selection_sort(n, array);
	
	printf("Array after sorting = [ ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("]\n");
	
	printf("Please, Enter the element you want to search in the array : ");
	scanf("%d", &search);
	
	index = binary_search(array, search, 0, n-1);
	
	if(index != -1)
	{
		printf("Element '%d' found at index = '%d' i.e. at location = '%d'\n", search, index, index+1);
	}
	else if(index == -1)
	{
		printf("The element searched for is'nt present in the array !\n");
	}
}
