/* QUE. 3: C program to search given element in 1-D array using binary search method (Use Dynamic Memory Allocation to represent the array)
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL; // NULL Pointer
	int num_of_elements,key_element,i,j,mid,temp,flag=0;
	
	printf("Enter the number of elements to be entered in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int *) malloc (num_of_elements*sizeof(int)); // Memory Allocation
	
	printf("Enter the elements to be entered in the array in assending order:\n");
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

	printf("Sorted Array = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements sorted in the array
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	printf("Enter the element to be searched in the array:\n");
	scanf("%d",&key_element);
	
	i = 0;
	j = num_of_elements-1;
	
	while(i <= j)
		{
	       		mid=(i+j)/2;
	       		if(*(p+mid) == key_element)
	       			{
	       				    printf("Element found at %d Index i.e. %d position\n",mid,mid + 1);
	       				    flag = 1;
	       				   break;
	       			}
	       		if(*(p+mid)>key_element)
	       			{
	       				j = mid-1;
	       			}
	       		else
           			{
           				i = mid+1;
           			}
   		}
   	if(flag != 1)
       		{
       			printf("Element searched is'nt present in the array:\n");
       		}
       	
       	free(p); // Memory Deallocation
}
