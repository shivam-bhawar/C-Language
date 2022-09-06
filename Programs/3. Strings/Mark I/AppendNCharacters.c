/* QUE.24: C program to accept two strings from the user and append N charecters of second string after first string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,j,N;
	
	printf("Enter the first string:\n");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the second string:\n");
	fgets(str2,sizeof(str2),stdin);
	printf("Enter the number of charecters:\n");
	scanf("%d",&N);
	
	for(i=0;str1[i]!='\n';i++)
		{
			
		}
		
	for(j=0;j<N;j++,i++)
		{
			str1[i]=str2[j];
		}
	str1[i]='\n';
	
	printf("Output:\n");
	for(i=0;str1[i]!='\n';i++)
		{
			printf("%c",str1[i]);
		}
	printf("\n");
}
