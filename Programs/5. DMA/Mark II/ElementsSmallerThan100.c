/* QUE. 9: C program to sort only those array elements which are less than 100 using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p,num_of_elements,i,j,temp;
	p = NULL; // NULL Pointer
	
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int *) malloc (num_of_elements*sizeof(int)); // Memory Allocation
	
	printf("Enter the elements to be entered in the array:\n");
	for(i=0;i<num_of_elements;i++) // Accept all the elements to be entered in the array
		{
			scanf("%d",(p+i));
		}
		
	printf("Array before sorting = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements entered in the array before sorting
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	for(i=0;i<num_of_elements;i++) // Sort all the array elements in assending order
		{
			for(j=i+1;j<num_of_elements;j++)
				{
					if(*(p+i) >100)
						{
							continue;
						}
					if(*(p+i)>*(p+j))
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
}

