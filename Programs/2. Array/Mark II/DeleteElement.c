/* C program to delete an element at desired position from an array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,delete_pos;
	
	printf("Enter the number of elements you want to store in the array:\n");
	label: // Retarts from here if user enters wrong size for the array
	scanf("%d",&num_of_elements);
	
	if(num_of_elements>0 && num_of_elements<=100)
		{
			printf("Enter the elements you want to store in the array:\n"); 
			for(i=0;i<num_of_elements;i++) // Accept all the elements to be stored in the array
				{
					scanf("%d",&array[i]);
				}
			
			printf("Array = [ ");
			for(i=0;i<num_of_elements;i++) // Print all the elements stored in the array
				{
					printf("%d ",array[i]);
				}
			printf("]\n");
			
			printf("Enter the position of the element you want to be deleted from the array:\n");
			scanf("%d",&delete_pos); 
			
			for(i=0,j=0;i<num_of_elements;i++,j++)
				{
					if(i==delete_pos-1)
						{
							j++;
						}
					array[i]=array[j];
				}
				
				printf("Array after deletion = [ ");
			for(i=0;i<num_of_elements-1;i++) // Print all the elements stored in the array after deletion
				{
					printf("%d ",array[i]);
				}
			printf("]\n");
		}
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
