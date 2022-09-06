/* QUE.14: C program to accept a sentence from the user and print last word from that sentence
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	
	printf("Enter the sentence:\n");
	fgets(str,sizeof(str)+1,stdin);
	
	for(i=0;str[i]!='\n';i++)
		{
			if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\n'))
				{
					count++;
				}
		}
	if(count==1)
		{
			printf("Output:\nLast word = ");
			for(i=0;str[i]!='\n';i++)
				{
					printf("%c",str[i]);
				}
			printf("\n");				
		}
	else
		{
			for(;str[i-1]!=' ';i--)
				{
			
				}
		
			printf("Output:\nLast word = ");
			for(;str[i]!='\n';i++)
				{
					printf("%c",str[i]);
				}
			printf("\n");
		}
}
