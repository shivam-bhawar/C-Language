/* QUE.9: C program to print all unique elements in an array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,flag;
	
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
			
			printf("Unique Elements = [ ");
			for(i=0;i<num_of_elements;i++)  // Find-out the unique elements from the array
				{
					flag=0;
					for(j=0;j<num_of_elements;j++)
						{
							if(array[i]==array[j])
								{
									flag++;
								}
						}
					if(flag==1)
						{
							printf("%d ",array[i]);	
						}
				}
			printf("]\n");
		}
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elments from 1 to 100:\n");
			goto label;
		}
}
