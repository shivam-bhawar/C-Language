#include<stdio.h>

void display_list(int array[ ], int n) // Function to display the array elements
{
	printf("\n------------------------------ STACK FRAME : display_list( ) ------------------------------\n");
	printf("\tn = %d\n", n);
	int i;
	
	printf("\tArray = [ ");
	for(i = 0 ; i < n ; i++)
	{
		printf("%d ", array[i]);
	}
	printf("]\n");
	
	printf("\nSTACK FRAME DESTROYED : display_list( )\n");
}

void quick_sort(int array[ ], int L, int H) // Function to sort the array elements in ascending order by using Quick Sort
{
	printf("\n------------------------------ STACK FRAME : quick_sort( ) ------------------------------\n");
	printf("\tL = %d, H = %d, ", L, H);
	int low, high, pivot, temp;
	
	pivot = array[L]; 
	printf("pivot = %d, ", pivot);
	low = L + 1; 
	printf("low = %d, ", low);
	high = H; 
	printf("high = %d\n", high);
		
	while(low <= high)
	{
		printf("\twhile(%d <= %d) : condition TRUE\n", low, high);
		while(array[low] < pivot)
		{
			printf("\t\twhile(%d < %d) : condition TRUE\n", array[low], pivot);
			low++;
			printf("\t\t\tlow = %d\n", low);
		}
		printf("\t\twhile(%d < %d) : condition FALSE\n", array[low], pivot);
		
		while(array[high] > pivot)
		{
			printf("\t\twhile(%d > %d) : condition TRUE\n", array[high], pivot);
			high--;
			printf("\t\t\thigh = %d\n", high);
		}
		printf("\t\twhile(%d > %d) : condition FALSE\n", array[high], pivot);
		
		if(low <= high)
		{
			printf("\t\tif(%d <= %d) : condition TRUE\n", low, high);
			temp = array[low]; 
			printf("\t\t\ttemp = array[%d]\n", low);
			array[low] = array[high]; 
			printf("\t\t\tarray[%d] = %d\n", low, array[high]);
			array[high] = temp; 
			printf("\t\t\tarray[%d] = %d\n", high, temp);
			printf("\t\t\tFUNCTION CALL : display_list(array, 19)\n"); 
			display_list(array, 19);
			printf("\n------------------------------ STACK FRAME : quick_sort( ) ------------------------------\n");
			low++; 
			printf("\t\t\tlow = %d\n", low);
			high--; 
			printf("\t\t\thigh = %d\n", high);
		}
		else
		{
			printf("\t\tif(%d <= %d) : condition FALSE\n", low, high);
		}
	}
	printf("\twhile(%d <= %d) : condition FALSE\n", low, high);
	
	temp = array[L]; 
	printf("\ttemp = array[%d]\n", L);
	array[L] = array[high]; 
	printf("\tarray[%d] = %d\n", L, array[high]);
	array[high] = temp; 
	printf("\tarray[%d] = %d\n", high, temp);
	printf("\tFUNCTION CALL : display_list(array, 19)\n");
	display_list(array, 19);
	printf("\n------------------------------ STACK FRAME : quick_sort( ) ------------------------------\n");
	
	if(L < high)
	{
		printf("\tif(%d < %d) : condition TRUE\n", L, high);
		printf("\t\tFUNCTION CALL : quick_sort(array, %d, %d)\n", L, high - 1);
		quick_sort(array, L, high - 1);
		printf("\n------------------------------ STACK FRAME : quick_sort( ) ------------------------------\n");
	}
	else
	{
		printf("\tif(%d < %d) : condition FALSE\n", L, high);
	}
	
	if(low < H)
	{
		printf("\tif(%d < %d) : condition TRUE\n", low, H);
		printf("\t\tFUNCTION CALL : quick_sort(array, %d, %d)\n", high + 1, H);
		quick_sort(array, high + 1, H);
		printf("\n------------------------------ STACK FRAME : quick_sort( ) ------------------------------\n");
	}
	else
	{
		printf("\tif(%d < %d) : condition FALSE\n", low, H);
	}
	
	printf("\nSTACK FRAME DESTROYED : quick_sort( )\n");
}

void main()
{
	printf("\n------------------------------ STACK FRAME : main( ) ------------------------------\n");
	int array[100], n, i;
	
	printf("\tPlease, Enter the number of elements you want to insert in the array : ");
	scanf("%d", &n); 
	printf("\tn = %d\n", n);
	
	printf("\tPlease, Enter the elements you want to insert in the array :\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("\t");
		scanf("%d", &array[i]);
	}
	
	printf("\tFUNCTION CALL : display_list(array, %d)\n", n);
	display_list(array, n);
	
	printf("\n------------------------------ STACK FRAME : main( ) ------------------------------\n");
	printf("FUNCTION CALL : quick_sort(array, 0, %d)\n", n - 1);
	quick_sort(array, 0, n - 1);
	
	printf("\n------------------------------ STACK FRAME : main( ) ------------------------------\n");
	printf("\tArray (After sorting) : ");
	printf("FUNCTION CALL : display_list(array, %d)\n", n);
	display_list(array, n);
	
	printf("\nSTACK FRAME DESTROYED : main( )\n");
}
