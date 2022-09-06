/* QUE.4: C program to print the minimum and the maximum element from the array accepted from the user
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],no_of_elements,i,min=0,max=0;

	printf("Enter the number of elements you want to store in the array:\n");
	label: // Restarts from here if user enters the wrong size for the array
	scanf("%d",&no_of_elements);

	if(no_of_elements>0 && no_of_elements<=100)
		{
			printf("Enter the elements you want to store in the array:\n");
			for(i=0;i<no_of_elements;i++) // Accept all the elements to be stored in the array
				{
				scanf("%d",&array[i]); 
				}

			for(i=0;i<no_of_elements;i++) // Find the minimum element from the array
				{
					if(min>array[i]) 
						{
							min=array[i]; 
						}
				}

			for(i=0;i<no_of_elements;i++) // Find the maximum element from the array
				{
					if(max<array[i])
						{
						max=array[i]; 
						}
				}
			printf("Minimum Element = %d\n",min);
			printf("Maximum Element = %d\n",max);
		}
		else // If user enters the wrong size for the array
			{
				printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
				goto label;
			}
}
