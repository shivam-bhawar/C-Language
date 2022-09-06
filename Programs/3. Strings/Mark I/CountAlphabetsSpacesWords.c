/* QUE.32: C program to count number of alphabets, spaces and words in given string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,alphabets=0,spaces=0,words=0;
	
	printf("Enter the string you want to count the number of alphabets, spaces and words in:\n");
	fgets(str,sizeof(str)+1,stdin);
	
	for(i=0;str[i]!='\n';i++)
		{
			if(str[i]>=65 && str[i]<=122)
				{
					alphabets++;
				}
			else if(str[i]==32)
				{
					spaces++;
				}
			
			if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\n'))
				{
					words++;
				}	
		}
	printf("Alphabets = %d\nSpaces = %d\nWords = %d\n",alphabets,spaces,words);
}
