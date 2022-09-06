/* QUE. 33 : C program to print all perfect numbers between 1 to n
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
int n,num,divisor,sum;
printf("Enter the number you want the perfect numbers to be printed up to:\n");
scanf("%d", &n);
for(num=1;num<=n;num++)
{
sum=0;
for(divisor=1;divisor<num;divisor++)
{
if(num% divisor == 0)
{
sum=sum+divisor;
}
}
if(sum == num)
{
printf("%d\n", num);
}
}
}
