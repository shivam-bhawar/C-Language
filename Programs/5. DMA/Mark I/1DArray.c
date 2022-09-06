/* QUE. 1: C program to represent 1-D array using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL; // NULL Pointer
	int num_of_elements,i;
	
	printf("Enter the number of elements to be entered in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int *) malloc (num_of_elements*sizeof(int)); // Memory Allocation
	
	printf("Enter the elements to be entered in the array:\n");
	for(i=0;i<num_of_elements;i++) // Accept the elements to be entered in the array
		{
			scanf("%d",(p+i));
		}
		
	printf("Array = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements entered in the array
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	free(p); // Memory Deallocation
}
