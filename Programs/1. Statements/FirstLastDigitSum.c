/* QUE. 12 : C program to find sum of first and last digit in a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
	{
	int num,temp,first=0,last=0;
	
	printf("Enter the number you want to find the sum of the first and the last digit in:\n");
	scanf("%d",&num);
	
	if(num<0) // If user enters a negative number
		{
			num=num*(-1);
		}
	temp=num; // Variable for temporary calculations
	while(temp>=10) 
		{
			temp=temp/10;
			first=temp;
		}
	last=num%10;
	printf("%d+%d=%d\n",first,last,first+last);
}
