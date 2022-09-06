/* QUE.20: C program to accept a string from the user and copy in another string 
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i;
	
	printf("Enter the string:\n");
	fgets(str1,sizeof(str1)+1,stdin);
	
	for(i=0;str1[i]!='\n';i++)
		{
			str2[i]=str1[i];
		}
	str2[i]='\n';
	
	printf("Output:\nCopied string is:\n");
	for(i=0;str2[i]!='\n';i++)
		{
			printf("%c",str2[i]);
		}
	printf("\n");
}
