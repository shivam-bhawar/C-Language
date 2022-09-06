/* QUE.31: C program to print all Armstong numbers up to n
493_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int n,num,temp,count,digit,DS,i,sum;
printf("Enter the number you want all Armstrong numbers to be printed up to:\n");
scanf("%d",&n);
for(num=1;num<=n;num++)
{
sum=0;
count=0;
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
printf("%d\n",num);
}
}
}
