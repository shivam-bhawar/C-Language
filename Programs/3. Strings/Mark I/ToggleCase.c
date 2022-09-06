/* QUE.18: C program to toggle the case of the string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{	
	char str[100];
	int i,temp;
	
	printf("Enter the string:\n");
	fgets(str,sizeof(str)+1,stdin);
	
	printf("Output:\n");
	for(i=0;str[i]!='\n';i++)
		{
			temp=str[i];
			if(temp>='A' && temp<='Z')
				{
					temp=temp+32;
				}
			else if(temp>='a' && temp<='z')
				{
					temp=temp-32;
				}
			printf("%c",temp);
		}
	printf("\n");
} 
