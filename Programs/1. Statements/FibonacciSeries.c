/* QUE. 36 : C program to print Fibonacci series up to n terms
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
	int n , num1 = 0 , num2 = 1 , sum = 0;
	
	printf("Enter the number you want the Fibonacci series to be printed up to :\n");
	scanf("%d" , &n);
	
	printf("Fibonacci series up to %d :\n",n);
	while(sum <= n) // Calculate Fibonacci series up to n
		{
			printf("%d\n" , num1);
			sum = num1 + num2;
			num1 = num2;
			num2 = sum;
		}
	printf("%d\n" , num1);
}
