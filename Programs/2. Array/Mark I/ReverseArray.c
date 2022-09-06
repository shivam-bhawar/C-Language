/* QUE.2: C program to accept an array from the user and print it in reverse order
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i;
	
	printf("Enter the number of elements you want to store in the array:\n");
	label: // Restarts from here if user enters the wrong size for the array
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

		printf("Reversed Array = [ ");
			for(i=num_of_elements-1;i>=0;i--) // Print all the elements stored in the array in reverse
				{
					printf("%d ",array[i]);
				}
		printf("]\n");
		}
	else // If user enters the wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
