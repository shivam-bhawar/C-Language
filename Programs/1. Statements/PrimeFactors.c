/* QUE.29: C program to find all prime factors of a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,fact1,fact2,i,count;
printf("Enter the number you want to find all prime factors of:\n");
scanf("%d",&num);
for(fact1=1;fact1<=num;fact1++)
{
for(fact2=1;fact2<=num;fact2++)
{
count=0;
i=1;
if(fact1*fact2==num)
{
while(i<=fact1)
{
if(fact1%i==0)
{
count++;
}
i++;
}
if(count==2)
{
printf("%d\n",fact1);
}
}
}
}
}
