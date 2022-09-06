/* QUE.32: C program to check whether a number is a perfect number or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,divisor,sum=0;
printf("Enter the number you want to check whether is perfect number or not:\n");
scanf("%d",&num);
for(divisor=1;divisor<num;divisor++)
{
if(num%divisor==0)
{
sum=sum+divisor;
}
}
if(sum==num)
{
printf("%d is a perfect number\n",num); 
}
else
{
printf("%d is not a perfect number\n",num);
}
}
