/* QUE.8: C program to count the frequency of each element in an array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],count,num_of_elements,i,j,x,flag;
	
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
				
			for(i=0;i<num_of_elements;i++) 
				{
					count=1;
					flag=0;
					for(x=i-1;x>=0;x--)
						{
							if(array[x]==array[i])
								{
									flag=1;
								}
						}
					if(flag!=1)
						{
						for(j=i+1;j<num_of_elements;j++)
							{
								if(array[i]==array[j])
									{
										count++;
									}
							}
							printf("Frequency of %d = %d\n",array[i],count);
						}
				}
		}
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
