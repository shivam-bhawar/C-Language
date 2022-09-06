/* QUE.17: C program to convert the string from upper case to lower case
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{	
	char str[100];
	int i,temp;
	
	printf("Enter the string:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin);
	
	printf("Output:\n");
	for(i=0;str[i]!='\n';i++)
		{
			temp=str[i];
			if(temp>=65 && temp<=91)
				{
					temp=temp+32;
				}
			printf("%c",temp);
		}
	printf("\n");
} 
