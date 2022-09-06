/* QUE. 19: C program to find all negative numbers from given array using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL; // NULL Pointer
	int num_of_elements,i;
	
	printf("Enter the number of elements to be entered in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int*) malloc (num_of_elements*sizeof(int)); // Memory Allocation
	
	printf("Enter the elements to be entered in the array:\n");
	for(i=0;i<num_of_elements;i++)	// Accept all the elements to store in the array
		{
			scanf("%d",(p+i));
		}
	
	printf("Array = [ ");
	for(i=0;i<num_of_elements;i++)	 // Print all the elements stored in the array
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	printf("Negative Elements = [ ");
	for(i=0;i<num_of_elements;i++)	 // Print all the negative elements stored in the array 
		{
			if(*(p+i)<0)
				{
					printf("%d ",*(p+i));
				}
		}
	printf("]\n");
}
