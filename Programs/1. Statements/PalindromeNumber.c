/* QUE.17: C program to check whether a number is palindrome or not
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main() 
{
int num,temp,count=0,cnt,pow=1,reverse=0,digit,flag=0;
printf("Enter the number you want to check whether is palindrome or not:\n");
scanf("%d",&num);
if(num<0) // If user enters a negative number
{
num=num*(-1);
flag++;
}
temp=num; // Variable for temporary calculations
if(temp!=0) //Block to count the number of digits in entered number
{
while(temp>0)
{
temp=temp/10;
count++;
}
}
else
{
count++;
}
cnt=count; // Variable for temporary calculations
while(cnt>0)
{
pow=pow*10;
cnt--;
}
pow=pow/10;
temp=num; // Variable for temporary calculations
while(temp>0)
{
digit=temp%10;
reverse=reverse+(digit*pow);
temp=temp/10;
pow=pow/10;
}
if(reverse-num==0)
{
if(flag==1) // If user had entered a negative number
{
num=num*(-1);
}
printf("%d is a palindrome\n",num);
}
else
{
if(flag==1) // If user had entered a negative number
{
num=num*(-1);
}
printf("%d is not a palindrome\n",num);
}
}
