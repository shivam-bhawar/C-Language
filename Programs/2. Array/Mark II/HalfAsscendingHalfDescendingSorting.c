/* QUE.:4: C program to sort first half of array in ascending order and second half of array in descending order
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,temp=0;
	
	printf("Enter the number of elements you want to store in the array:\n");
	label: // Restarts from here if user enters wrong size for the array 
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
			
			for(i=0;i<num_of_elements/2;i++) // Sort the first half of the array in ascending order
				{
					for(j=i+1;j<num_of_elements/2;j++)
						{
							if(array[i]>array[j])
								{
									temp=array[i];
									array[i]=array[j];
									array[j]=temp;
								}
						}
				}
				
				for( ;i<num_of_elements;i++) // Sort the second half of the array in descending order
				{
					for(j=i+1;j<num_of_elements;j++)
						{
							if(array[i]<array[j])
								{
									temp=array[i];
									array[i]=array[j];
									array[j]=temp;
								}
						}
				}
				
				printf("Sorted Array = [ ");
			for(i=0;i<num_of_elements;i++) // Print the sorted elements stored in the array
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
