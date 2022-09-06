/* QUE. 9-B : C program to print multiplication table of numbers up to n
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	int n, multiplier, num;
	
	do
	{
		printf("Enter the number you want the multiplication table of numbers to be printed up to (Enter 0 to exit) : ");
		scanf("%d", &n);
		
		if(n > 0)
		{
			for(num = 1 ; num <= n ; num++)
			{
				printf("Multiplication table of %d :\n", num);
				for(multiplier = 1 ; multiplier <= 10 ; multiplier++)
				{
					printf("%d\n", num * multiplier);
				}
				printf("--------------------------------------------------------------------------------\n");
			}
		}
		else if( n < 0)
		{
			for(num = -1 ; num >= n ; num--)
			{
				printf("Multiplication table of %d :\n", num);
				for(multiplier = 1 ; multiplier <= 10 ; multiplier++)
				{
					printf("%d\n", num * multiplier);
				}
				printf("--------------------------------------------------------------------------------\n");
			}
		}
	}while(n != 0);
}
