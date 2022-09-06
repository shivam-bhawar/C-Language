/* QUE.28: C program to accept a string from the user and then reverse the string till first N charecters without taking another string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100],temp;
	int i,N;
	
	printf("Enter the string:\n");
	fgets(str,sizeof(str)+1,stdin);
	printf("Enter the number of charecters you want to reverse:\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
		{
			temp=str[i];
			str[i]=str[N-1];
			str[N-1]=temp;
			N--;
		}
		
	printf("Output:\n");
	for(i=0;str[i]!='\n';i++)
		{
			printf("%c",str[i]);
		}
	printf("\n");
}
