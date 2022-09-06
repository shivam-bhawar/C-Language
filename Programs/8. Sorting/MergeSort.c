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

void merge(int array[ ], int low, int mid, int high)
{
	int b[100], i, j, k;
	i = low;
	j = mid+1;
	k = 0;
	while(i <= mid && j <= high)
	{
		if(array[i] > array[j])
		{
			b[k] = array[j];
			k++;
			j++;
		}
		else
		{
			b[k] = array[i];
			k++;
			i++;
		}
	}
	
	while(i <= mid)
	{
		b[k] = array[i];
		k++;
		i++;
	}
	
	while(j <= high)
	{
		b[k] = array[j];
		k++;
		j++;
	}
	k = 0;
	for(i = low ; i <= high ; i++)
	{
		array[i] = b[k];
		k++;
	}
}

void merge_sort(int array[ ], int low, int high) // Function to sort the array elements in ascending order by using merge Sort
{
	int mid;
	
	if(low < high)
	{
		mid = (low + high) / 2;
		merge_sort(array, low, mid);
		merge_sort(array, mid + 1, high);
		
		merge(array, low, mid, high);
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
	
	merge_sort(array, 0, n - 1);
	
	printf("Array (After sorting) : ");
	display_list(array, n);
}
