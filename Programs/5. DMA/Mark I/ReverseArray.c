/* QUE. 5: C program to reverse a given 1-D array without using sorting algorithms (Use Dynamic Memory Allocation to represent the array)
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL; // NULL Pointer
	int num_of_elements,i,j,temp;

	printf("Enter the number of elements to be entered in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int *) malloc (num_of_elements*sizeof(int)); // Memory Allocation
	
	printf("Enter the elements to be entered in the array:\n");
	for(i=0;i<num_of_elements;i++) // Accept the elements to be entered in the array
		{
			scanf("%d",(p+i));
		}
		
	printf("Array before reversing = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements entered in the array before reversing 
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");

	for(i=0,j = (num_of_elements-1);i<=j;i++,j--) // Reverse the array
		{
			temp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = temp;
		}
		
	printf("Array after reversing = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements entered in the array after reversing
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	free(p); // Memory Deallocation
}
