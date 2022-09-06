/* QUE.12: C program to accept a sentence from user and print number of small letters, capital letters, spaces and digits from the sentence
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,small=0,capital=0,spaces=0,digits=0;
	
	printf("Enter a string:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin);
	
	for(i=0;str[i]!='\n';i++)
		{		
			if(str[i]>=97 && str[i]<=122)
				{
					small++;
				}
			else if(str[i]>=65 && str[i]<=90)
				{
					capital++;
				}
			else if(str[i]==32)
				{
					spaces++;
				}
			else if(str[i]>=48 && str[i]<=57)
				{
					digits++;
				}
		}
	printf("Output:\nSmall letters = %d\nCapital letters = %d\nSpaces = %d\nDigits = %d\n",small,capital,spaces,digits);
}
