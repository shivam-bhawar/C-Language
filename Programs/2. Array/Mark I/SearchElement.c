/* QUE.3: C program to accept an array from the user and search for a particular element
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],no_of_elements,i,search,flag=0;
	
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
			
			printf("Enter the element you want to search in the array:\n");
			scanf("%d",&search); // Accept the element to be searched
	
			for(i=0;i<no_of_elements;i++) // Check if the element searched is present in the array or not
				{
					if(array[i]==search)
						{
							printf("Yes, %d is pressent in the array\n",search);
							flag++;
						}
				}
			if(flag==0)
				{
					printf("No, %d is'nt present in the array\n",search);
				}
		}
	else // If user enters the wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100\n");
			goto label;
		}
}
