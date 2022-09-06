/* QUE.26: C program to check whether a number is Prime number or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,i=1,count=0;
printf("Enter the number you want to check whether is prime number or not:\n");
scanf("%d",&num);
while(i<=num)
{
if(num%i==0)
{
count++;
}
i++;
}
if(count==2)
printf("%d is a prime number\n",num);
else
{
printf("%d is not a prime number!\n",num);
}
}
