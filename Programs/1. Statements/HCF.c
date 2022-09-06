/* QUE.24: C program to find HCF (GCD) of two numbers
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num1,num2,divisor=1,GCD;
printf("Enter the two numbers you want to find HCF (GCD) of:\n");
scanf("%d%d",&num1,&num2);
while(divisor<=num1 && divisor<=num2)
{
if(num1%divisor==0 && num2%divisor==0)
{
GCD=divisor;
}
divisor++;
}
printf("GCD(%d,%d) = %d\n",num1,num2,GCD);
}
