/* QUE.19: C program to enter a number and print it in words
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main() 
{
int num,temp,count=0,cnt,pow=1,reverse=0,digit,ch;
printf("Enter the number you want to be printed in words:\n");
scanf("%d",&num);
if(num<0) // If user enters a negative number
{
num=num*(-1);
printf("-");
}
temp=num; // Variable for temporary calculations
if(temp!=0) //Block to count the number of digits in entered number
{
while(temp>0) // Count the number of digits in entered number
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
while(temp>0) // Find the reverse of the entered number
{
digit=temp%10;
reverse=reverse+(digit*pow);
temp=temp/10;
pow=pow/10;
}
while(reverse>0)
{
ch=reverse%10;
switch(ch) // Switch case to print reversed number in words
{
case 0: printf("Zero ");
	break;
case 1: printf("One ");
	break;
case 2: printf("Two ");
	break;
case 3: printf("Three ");
	break;
case 4: printf("Four ");
	break;
case 5: printf("Five ");
	break;
case 6: printf("Six ");
	break;
case 7: printf("Seven ");
	break;
case 8: printf("Eight ");
	break;
case 9: printf("Nine ");
	break;
}
reverse=reverse/10;
}
}
