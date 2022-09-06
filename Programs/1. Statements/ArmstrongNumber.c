/* QUE.30: C program to check whether a number is an Armstrong number or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,temp,count,digit,DS,i,sum=0;
printf("Enter the number you want to check whether is an Armstrong number or not:\n");
scanf("%d",&num);
temp=num; // Variable for temporary calculations
if(temp!=0)
{
while(temp>0) // Calculate the number of digits in entered number
{
temp=temp/10;
count++;
}
}
else
{
count++;
}
temp=num; // Variable for temporary calculations
while(temp>0)
{
digit=temp%10;
DS=1;
for(i=1;i<=count;i++)
{
DS=DS*digit;
}
sum=sum+DS;
temp=temp/10;
}
if(sum==num)
{
printf("%d is an Armstrong number\n",num);
}
else
{
printf("%d is'nt an Armstrong number\n",num);
}
}
