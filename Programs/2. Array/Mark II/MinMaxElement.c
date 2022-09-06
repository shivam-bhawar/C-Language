/* QUE.13: C program to find the Minimum/Maximum element in an array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,temp=0,ch;
	
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
				
				printf("Enter your choice:\n1. Minimum Element\n2. Maximum Element\n");
				label2: // Restarts from here if user enters a wrong choice
				scanf("%d",&ch);
				switch(ch)
					{
						case 1: printf("Minimum Element = %d\n",array[0]);
								break;
						case 2: printf("Maxuimum Element = %d\n",array[num_of_elements-1]);
								break;
						default: printf("WRONG CHOICE!!! Enter your choice between 1 and 2 only:\n");
								goto label2;
					}
		}	
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label1;
		}
}
