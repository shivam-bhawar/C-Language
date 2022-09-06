/* QUE.16: C program to enter a number and print it's reverse
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,rev,flag;
printf("Enter the number you want to be printed in reverse:\n");
scanf("%d",&num);
if(num<0) // If user enters a negative number
{
num=num*(-1);
printf("-");
}
while(num!=0)
{
rev=num%10;
num=num/10;
printf("%d",rev);
}
}
