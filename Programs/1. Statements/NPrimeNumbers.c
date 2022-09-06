/* QUE.27: C program to print all prime numbers between 1 to n
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int n,num,i,count;
printf("Enter the number you want to print all prime numbers up to:\n");
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
printf("%d\n",num);
}
}
}
