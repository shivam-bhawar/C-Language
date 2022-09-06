/* QUE. 4 : Write a C program to print all even numbers between 1 to 100 (Using while loop)
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	int num = 1;
	
	printf("Even numbers between 1 to 100 = ");
	while(num <= 100)
	{
		if(num%2 == 0)
		{
			printf("%d, " , num);
		}
		num++;
	}
	printf("\n");
}
