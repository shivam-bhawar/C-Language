/* QUE. 1 : Write a C program to print all natural numbers from 1 to n (Using while loop)
PPA8_Shivam_Bhawar */
#include<stdio.h>

void main()
{
	int n, num;
	
	do
	{
		printf("Enter the number you want the natural numbers to be printed up to (Press 0 to exit) : "); 
		scanf("%d", &n);
		
		if(n > 0)
		{
			num = 1;
			printf("Natural numbers from 1 to %d = ", n);
			while(num <= n) 
			{
				printf("%d, ", num);
				num++;
			}
			printf("\n");
		}
		else if(n < 0)
		{
			printf("WRONG CHOICE !!! Entered number is'nt a natural number !\n");
		}
	}while(n != 0);
}
