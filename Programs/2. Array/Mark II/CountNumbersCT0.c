/* QUE.2: C program to count the number of elements less than, greater than and equal to zero in an integer array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,less=0,equal=0,greater=0;
	
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
			
			for(i=0;i<num_of_elements;i++)
				{
					if(array[i]<0) // If number is less than zero
						{
							less++;
						}
					else if(array[i]>0) // If number is greater than zero
						{
							greater++;
						}
					else // If number is equal to zero
						{
							equal++;
						}
				}
			
			printf("Number of elements in the array:\nLess than zero = %d\nGreater than zero = %d\nEqual to zero = %d\n",less,greater,equal);
		}	
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
