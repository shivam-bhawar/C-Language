/* QUE. 11: C program to print all prime numbers from given array among given range using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p,num_of_elements,i;
	int num,j,count;
	p = NULL; // NULL Pointer
	
	printf("Enter the number of elements to be entered in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int *) malloc (num_of_elements*sizeof(int)); // Memory Allocation
	
	printf("Enter the elements to be entered in the array:\n");
	for(i=0;i<num_of_elements;i++) // Accept all the elements to be entered in the array
		{
			scanf("%d",(p+i));
		}
		
	printf("Array = [ ");
	for(i=0;i<num_of_elements;i++) // Print all the elements entered in the array
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	printf("Prime Numbers = [ ");
	for(i=0;i<num_of_elements;i++) // Find out Prime numbers from the array
		{
			num = *(p+i);
			j=1;
			count=0;
			while(j<=num)
				{
					if(num%j==0)
						{
							count++;
						}
					j++;
				}
			if(count==2)
				printf("%d ",num);
		}
	printf("]\n");
}

