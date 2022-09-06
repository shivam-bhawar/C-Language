/* QUE.15: C program to calculate product of digits of a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,product=1;
printf("Enter a number you want to calculate product of digits of:\n");
scanf("%d",&num);
if(num<0) // If user enters a negative number
{
num=num*(-1);
}
if(num!=0)
{
while(num!=0)
{
product=product*(num%10);
num=num/10;
}
printf("Product of digits = %d\n",product);
}
else // If user had entered zero
{
printf("Product of digits = 0\n");
}
}
