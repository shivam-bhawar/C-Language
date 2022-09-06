#include<stdio.h>

int linear_search(int n, int array[ ], int search) // Function to search any element in an array using linear search
{
	int i, flag = 0;
	for(i = 0; i < n; i++)
	{
		if(array[i] == search)
		{
			return i;
		}
	}
	
	return -1;
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

	printf("Please, Enter the element you want to search in the array : ");
	scanf("%d", &search);
	
	index = linear_search(n, array, search);
	
	if(index != -1)
	{
		printf("Element '%d' found at index = '%d' i.e. at location = '%d'\n", search, index, index+1);
	}
	else
	{
		printf("The element searched for is'nt present in the array !\n");
	}
}
