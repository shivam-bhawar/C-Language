/* QUE.18: C program to calculate frequency of each digit
493_Shivam_Bhawar */
#include<stdio.h>
void main()
{
int num,temp,ch,zero,one,two,three,four,five,six,seven,eight,nine,flag;
zero=one=two=three=four=five=six=seven=eight=nine=0;
printf("Enter the number you want to calculate the frequency of each digit of:\n");
scanf("%d",&num);
if(num<0) // If user enters a negative number
{
num=num*(-1);
}
temp=num; // Variable for temporary calculations
while(temp>0)
{
ch=temp%10;
switch(ch) // Switch case to calculate the frequency of each digit
{
case 0: zero++; 
	break;
case 1: one++;
	break;
case 2: two++;
	break;
case 3: three++;
	break;
case 4: four++;
	break;
case 5: five++;
	break;
case 6: six++;
	break;
case 7: seven++;
	break;
case 8: eight++;
	break;
case 9: nine++;
	break;
}
temp=temp/10;
}
while(num>0)
{
ch=num%10;
if(ch!=flag)
{
switch(ch) // Switch case to print the frequency of each digit
{
case 0: printf("0 = %d\n",zero);
flag=0;
	break;
case 1:printf("1 = %d\n",one);
flag=1;
	break;
case 2: printf("2 = %d\n",two);
flag=2;
	break;
case 3: printf("3 = %d\n",three);
flag=3;
	break;
case 4: printf("4 = %d\n",four);
flag=4;
	break;
case 5: printf("5 = %d\n",five);
flag=5;
	break;
case 6: printf("6 = %d\n",six);
flag=6;
	break;
case 7: printf("7 = %d\n",seven);
flag=7;
	break;
case 8: printf("8 = %d\n",eight);
flag=8;
	break;
case 9: printf("9 = %d\n",nine);
flag=9;
	break;
}
}
num=num/10;
}
}
