/* QUE. 5 : Write a C program to print all odd number between 1 to 100 (Using while loop)
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	int num = 1;
	
	printf("Odd numbers between 1 to 100 = ");
	while(num <= 100)
	{
		if(num%2 == 1)
		{
			printf("%d, " , num);
		}
		num++;
	}
	printf("\n");
}
