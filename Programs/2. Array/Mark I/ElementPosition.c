/* QUE.6: C program to accept an array from the user and find the position of any particular element
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],no_of_elements,i,search,flag=0;
	
	printf("Enter the number of elements you want to store in the array:\n");
	label: //  Restarts from here if user enters the wrong size for the array
	scanf("%d",&no_of_elements);

	if(no_of_elements>0 && no_of_elements<=100)
		{
			printf("Enter the elements you want to store in the array:\n");
			for(i=0;i<no_of_elements;i++) // Accept all the elements to be stored in the array
				{
					scanf("%d",&array[i]);
				}
			
			printf("Enter the element you want to find the position of in the array:\n");
			scanf("%d",&search); //  Accept the element the position of to be searched for
	
			for(i=0;i<no_of_elements;i++) // Find position of element in the array
				{
					if(array[i]==search)
						{
							printf("Position of %d in the array = %d\n",search,i+1);
							flag++;
						}
				}
			if(flag==0) // If the element searched for is'nt found
				{
					printf("The element you searched for is'nt present in the array\n");
				}
		}
	else // If user enters the wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100\n");
			goto label;
		}
}
