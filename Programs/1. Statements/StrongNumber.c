/* QUE. 34 : C program to check whether a number is a Strong number or not
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
	int num , temp , fact , digit , sum = 0;
	
	printf("Enter the number you want to check whether is a Strong number or not :\n");
	scanf("%d" , &num);
	
	temp = num; 
	while(temp > 0) // Check whether the number is a Strong number or not
		{
			fact = 1;
			digit = temp%10;
			while(digit >= 1) // Calculate factorial of digits
				{
					fact = fact*digit;
					digit--;
				}
			sum = sum+fact;
			temp = temp/10;
		}
	if(sum == num)
		{
			printf("%d is a Strong number .\n" , num);
		}
	else
		{
			printf("%d is'nt a Strong number !\n" , num);
		}
}
