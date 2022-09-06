/* QUE.11: C program to insert a new value in the sorted array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,temp=0,insert,insert_pos;
	
	printf("Enter the number of elements you want to store in the array:\n");
	label1: // Restarts from here if user enters wrong size for the array 
	scanf("%d",&num_of_elements);
	
	if(num_of_elements>0 && num_of_elements<=100)
		{
			printf("Enter the elements you want to store in the array:\n");
			for(i=0;i<num_of_elements;i++) // Accept all the elements to be stored in the array
				{
					scanf("%d",&array[i]);
				}
				
			for(i=0;i<num_of_elements;i++) // Sort the elements in array in ascending order
				{
					for(j=i+1;j<num_of_elements;j++)
						{
							if(array[i]>array[j])
								{
									temp=array[i];
									array[i]=array[j];
									array[j]=temp;
								}
						}
				}
				
				printf("Sorted Array = [ ");
				for(i=0;i<num_of_elements;i++) // Print all the elements stored in the array
					{
						printf("%d ",array[i]);
					}
				printf("]\n");
				
				printf("Enter the element you want to insert in the array:\n");
				scanf("%d",&insert);
				
				for(i=num_of_elements-1,j=num_of_elements;i>=0;i--,j--)
					{
						array[j]=array[i];
						if(array[i-1]<insert)
							{
								array[i]=insert;
								break;
							}
					}
				
				printf("Array after insertion = [ ");
			for(i=0;i<=num_of_elements;i++) // Print all the elements stored in the array after inssertion
				{
					printf("%d ",array[i]);
				}
			printf("]\n");
		}	
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label1;
		}
}
