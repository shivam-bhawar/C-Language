/* QUE.28: C program to print sum of  all prime numbers between 1 to n
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,i,count,n,sum=0;
printf("Enter the number you want to print sum of all prime numbers up to:\n");
scanf("%d",&n);
for(num=1;num<=n;num++)
{
i=1;
count=0;
while(i<=num)
{
if(num%i==0)
{
count++;
}
i++;
}
if(count==2)
{
printf("%d ",num);
sum=sum+num;
}
}
printf(" = %d\n",sum);
}
