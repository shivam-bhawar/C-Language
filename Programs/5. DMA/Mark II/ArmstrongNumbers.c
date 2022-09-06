/* QUE. 6: C program to print all Armstrong numbers from given integer array using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL;
	int num_of_elements,loop;
	int num,temp,count,digit,DS,i,sum;

	printf("Enter the number of elements to be entered in the array:\n");
	scanf("%d",&num_of_elements);

	p = (int*) malloc (num_of_elements*sizeof(int));

	printf("Enter the elements to be entered in the array:\n");
	for(loop=0;loop<num_of_elements;loop++)
		{
			scanf("%d",(p+loop));
		}
	
	printf("Array = [ ");
	for(loop=0;loop<num_of_elements;loop++)
		{
			printf("%d ",*(p+loop));
		}
	printf("]\n");

	printf("Armstrong Numbers = [ ");
	for(loop=0;loop<num_of_elements;loop++)
		{
			num=*(p+loop);
			sum=0;
			count=0;
			temp=num; // Variable for temporary calculations
			if(temp!=0)
				{
					while(temp>0) // Calculate the number of digits in entered number
						{
							temp=temp/10;
							count++;
						}
				}
			else
				{
					count++;
				}
			temp=num; // Variable for temporary calculations
			while(temp>0)
				{
					digit=temp%10;
					DS=1;
					for(i=1;i<=count;i++)
						{
							DS=DS*digit;
						}
					sum=sum+DS;
					temp=temp/10;
				}
			if(sum==num)
				{
					printf("%d ",num);
				}
	}
	printf("]\n");
}

