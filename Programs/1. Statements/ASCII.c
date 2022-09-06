/* QUE.20: C program to print all ASCII charecters with their values
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
char charecter='\0';
while(charecter<='~')
{
printf("%d = %c\n",charecter,charecter);
charecter++;
}
}
