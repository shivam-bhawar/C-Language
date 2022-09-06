/* QUE. 10 : Write a C program to count number of digits in a number
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	int num, temp, count;
	
	do
	{
		printf("Enter the number you want the number of digits to be calculated in (Enter 0 to exit) : ");
		scanf("%d", &num);
		
		if(num != 0)
		{
			count = 0;
			temp = num;
			while(temp > 0 || temp < 0)
			{
				temp = temp/10;
				count++;
			}
			printf("Number of digits in %d = %d\n", num, count);
		}
	}while(num != 0);
}
