/* QUE.3: C program to print the positions of the palindrome elements in an array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[100],num_of_elements,i,j,temp,count,pow,reverse,digit,flag;
	
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
			
			printf("Positions of palindrome elments in the array:");
			for(i=0;i<num_of_elements;i++) // Find palindrome elements from the array
				{
					count=0,pow=1,reverse=0,digit,flag=0;
					if(array[i]<0)  // If an element is a negative integer
						{
							array[i]=array[i]*(-1);
							flag++;
						}
					temp=array[i];  // Variable for temporary calculations
					if(temp!=0) // Count the number of digits in an element 
						{
						while(temp>0)
							{
								temp=temp/10;
								count++;
							}
						}
					else
						{
							count++;
						}
					while(count>0)
						{
							pow=pow*10;
							count--;
						}
					pow=pow/10;
					temp=array[i]; // Variable for temporary calculations
					while(temp>0) // Find the reverse of the element
						{
							digit=temp%10;
							reverse=reverse+(digit*pow);
							temp=temp/10;
							pow=pow/10;
						}
					if(reverse-array[i]==0)
						{
							if(flag==1) // If element was a negative integer
								{
									array[i]=array[i]*(-1);
								}
							printf("%d\n",array[i]);
						}
				}
		}	
	else // If user enters wrong size for the array
		{
			printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
			goto label;
		}
}
