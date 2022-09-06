/* QUE.21: C program to accept a string from user and copy first N charecters into some destination string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,N;
	
	printf("Enter the string:\n");
	// Accept a string from the user
	fgets(str1,sizeof(str1)+1,stdin);
	printf("Enter the number of charecters you want to be copied:\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
		{
			str2[i]=str1[i];
		}
	str2[i]='\n';
	
	printf("Outpt:\n");
	for(i=0;str2[i]!='\n';i++)
		{
			printf("%c",str2[i]);
		}
	printf("\n");
}
