/* QUE.14: C program to calculate sum of digits of a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,sum=0;
printf("Enter the number you want the sum of digits to be calculated of:\n");
scanf("%d",&num);
if(num<0) // If user enters a negative number
{
num=num*(-1);
}
while(num!=0)
{
sum=sum+(num%10);
num=num/10;
}
printf("Sum of digits = %d\n",sum);
}
