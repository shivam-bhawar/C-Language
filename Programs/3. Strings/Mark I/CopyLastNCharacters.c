/* QUE.22: C program to accept a string from the user and accept number N then copy last N charecters into some another string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,j,N;
	
	printf("Enter the string:\n");
	// Accept a string from the user
	fgets(str1,sizeof(str1)+1,stdin);
	printf("Enter the number of last charecters you want to be copied:\n");
	scanf("%d",&N);
	
	for(i=0;str1[i]!='\n';i++)
		{
		
		}
	for(j=0;j<N;j++)
		{
			i--;
		}
	for(j=0;str1[i]!='\n';i++,j++)
		{
			str2[j]=str1[i];
		}
	str2[j]='\n';
	
	printf("Outpt:\n");
	for(i=0;str2[i]!='\n';i++)
		{
			printf("%c",str2[i]);
		}
	printf("\n");
}
