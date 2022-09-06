/* QUE. 9-A : Write a C program to print multiplication table of any number
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	int num, multiplier;
	
	do
	{
		multiplier = 1;
		printf("Enter the number you want the multiplication table to be printed of (Enter 0 to exit) : ");
		scanf("%d", &num);
		
		if(num != 0)
		{
			printf("Multiplication table of %d :\n",num);
			while(multiplier <= 10) 
			{
				printf("%d\n", num * multiplier);
				multiplier++;
			}
		}
	}while(num != 0);
}
