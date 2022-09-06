/* QUE.10: C program to find the minimum and the maximum element in an array
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
		
				printf("Minimum Element = %d\n",array[0]);
				printf("Maxuimum Element = %d\n",array[num_of_elements-1]);
		}	
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}  
