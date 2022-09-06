/* QUE. 2 : Write a C program to print all natural numbers in reverse i.e. from n to 1 (Using while loop)
PPA8_Shivam_Bhawar */
#include<stdio.h>

void main()
{
	int n;
	
	do
	{
		printf("Enter the number you want the natural numbers to be printed in reverse from (Enter 0 to exit) : ");
		scanf("%d", &n);
		
		if(n > 0)
		{
			printf("Natural numbers from %d to 1 = ", n);
			while(n >= 1) 
			{
				printf("%d, ", n);
				n--;
			}
			printf("\n");
		}
		else if(n < 0)
		{
			printf("WRONG CHOICE !!! Entered number is'nt a natural number !\n");
		}
	}while(n != 0);
}
