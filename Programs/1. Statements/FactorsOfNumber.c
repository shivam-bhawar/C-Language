/* QUE.22: C program to find all factors of a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,fact1,fact2;
printf("Enter the number you want to find all factors of:\n");
scanf("%d",&num);
for(fact1=1;fact1<=num;fact1++)
{
for(fact2=1;fact2<=num;fact2++)
{
if(fact1*fact2==num)
{
printf("%d\t%d\n",fact1,fact2);
}
}
}
}
