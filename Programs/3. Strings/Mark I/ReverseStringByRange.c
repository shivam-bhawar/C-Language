/* QUE.29: C program to accept a string form the user and then accept range and reverse the string in that range without taking another string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100],temp;
	int i,j,n1,n2;
	
	printf("Enter a string:\n");
	fgets(str,sizeof(str)+1,stdin);
	
	printf("Enter the range:\n");
	scanf("%d %d",&n1,&n2);
	
	for(i=0;i+1<n1;i++)
		{
		
		}
		
	for(j=0;j+1<n2;j++)
		{
		
		}
	for( ;i<=j;i++,j--)
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
		}
	
	printf("String after reversed between entered range is:\n");
	for(i=0;str[i]!='\n';i++)
		{
			printf("%c",str[i]);
		}
	printf("\n");
}
