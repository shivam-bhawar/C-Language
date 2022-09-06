/* QUE.25: C program to find LCM of two numbers
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num1,num2,multiplicand=1,LCM;
printf("Enter two numbers you want to find LCM of:\n");
scanf("%d%d",&num1,&num2);
while(multiplicand>0)
{
if(multiplicand%num1==0 && multiplicand%num2==0)
{
LCM=multiplicand;
printf("LCM(%d,%d) = %d\n",num1,num2,LCM);
break;
}
multiplicand++;
}
}
