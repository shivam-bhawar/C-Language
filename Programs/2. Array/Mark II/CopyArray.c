/* QUE.5: C program to copy all the elements from one array into another array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array1[100],array2[100],num_of_elements,i;
	
	printf("Enter the number of elements you want to store in the array:\n");
	label: // Retarts from here if user enters wrong size for the array
	scanf("%d",&num_of_elements);
	
	if(num_of_elements>0 && num_of_elements<=100)
		{
			printf("Enter the elements you want to store in the array:\n"); 
			for(i=0;i<num_of_elements;i++) // Accept all the elements to be stored in the array
				{
					scanf("%d",&array1[i]);
				}
			
			printf("Array = [ ");
			for(i=0;i<num_of_elements;i++) // Print all the elements stored in the array
				{
					printf("%d ",array1[i]);
				}
			printf("]\n");
			
			for(i=0;i<num_of_elements;i++) // Copy all the elements from given array into another array
				{
					array2[i]=array1[i];
				}	
				
			printf("Copied Array = [ ");
			for(i=0;i<num_of_elements;i++) // Print all the elements from the copied array
				{
					printf("%d ",array2[i]);
				}
			printf("]\n");
		}			
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
