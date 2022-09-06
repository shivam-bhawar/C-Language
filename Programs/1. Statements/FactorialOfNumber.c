/* QUE.23: C program to calculate factorial of a number
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,fact=1,temp;
printf("Enter the number you want to calculate factorial of:\n");
scanf("%d",&num);
temp=num; // Variable for temporary calculations
while(temp>=1)
{
fact=fact*temp;
temp--;
}
printf("!%d = %d\n",num,fact);
}
