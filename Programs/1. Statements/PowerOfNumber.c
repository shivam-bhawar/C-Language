/* QUE.20: C program to find power of a number - using for loop
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,power,i,ans=1;
printf("Enter the number you want to find the power of:\n");
scanf("%d",&num);
printf("Enter the power you want to find of the entered number;\n");
scanf("%d",&power);
for(i=1;i<=power;i++)
{
ans=ans*num;
}
printf("%d^%d = %d\n",num,power,ans);
}
