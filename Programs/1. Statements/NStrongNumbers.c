/* QUE. 35 : C program to print all strong numbers from 1 to n
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
	int n , num = 1 , temp , digit , sum , fact;
	
	printf("Enter the number you want all Strong numbers to be printed up to :\n");
	scanf("%d", &n);
	
	printf("Strong numbers up to %d :\n",n);
	while(num <= n) // Calculate all Strong numbers up to n
		{
			sum = 0;
			temp = num; 
			while(temp > 0)
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
					printf("%d\n" , num);
				}
			num++;
		}
}
