/* QUE. 6 : Write a C program to find sum of all natural numbers between 1 to n
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	int n, num, sum;
	
	do
	{
		printf("Enter the number you want the sum of all natural numbers to be printed up to (Enter 0 to exit) : ");
		scanf("%d", &n);
		
		if(n > 0)
		{
			num = 1;
			sum = 0;
			while(num <= n)
			{
				sum = sum + num;
				num++;
			}
			printf("Sum of all natural numbers up to %d = %d\n", n, sum);
		}
		else if(n < 0)
		{
			printf("WRONG CHOICE !!! Entered number is'nt a natural number !\n");
		}
	}while(n != 0);
}
