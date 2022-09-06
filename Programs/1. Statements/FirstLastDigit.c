/* QUE. 11 : C program to find first and last digit in a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
	{
	int num , temp;
	
	printf("Enter the number you want to find the first and the last digit in :\n");
	scanf("%d" , &num);
	
	if(num < 0) // If user enters a negative number
		{
			num = num * (-1);
		}
	temp = num; // Variable for temporary calculations
	while(temp >= 10 || temp <= -10) // Find the first digit in given number
		{
			temp = temp/10;
		}
	printf("First digit = %d\nLast digit = %d\n" , temp , num%10); 
}
