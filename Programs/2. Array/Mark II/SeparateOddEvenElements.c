/* QUE.7: C program to separate odd and even integers in same array
PPA8_Shivam_Bhawar */
 #include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,temp=0;
	
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
			
			for(i=0;i<num_of_elements/2;i++) // Separate odd and even numbers in given array
				{
					for(j=i+1;j<num_of_elements;j++)
						{
							if((array[i]%2!=0))
								{
									temp=array[i];
									array[i]=array[j];
									array[j]=temp;
								}
						}
				}
				
			printf("Array = [ ");
			for(i=0;i<num_of_elements;i++) // Print all the elements separated in the array
				{
					printf("%d ",array[i]);
				}
			printf("]\n");
		}
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
