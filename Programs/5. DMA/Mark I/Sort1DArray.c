/* QUE. 2: C program to sort 1-D array in assending order using Dynamic Memory Allocation
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
		
	printf("Array before sorting = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements entered in the array before sorting
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	for(i=0;i<num_of_elements;i++) // Sort all the elements in the array in assending order
		{
			for(j=i+1;j<num_of_elements;j++)
				{
					if(*(p+i) > *(p+j))
						{
							temp = *(p+i);
							*(p+i) = *(p+j);
							*(p+j) = temp;
						}
				}
		}
		
	printf("Array after sorting = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements in the array after sorting
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	free(p); // Memory Deallocation
}
