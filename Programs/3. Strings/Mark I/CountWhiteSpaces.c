/* QUE.13: C program to which accepts sentence from user and print number of white spaces from that sentence
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	
	printf("Enter the sentence:\n");
	// Accept a sentence form the user
	fgets(str,sizeof(str)+1,stdin);
	
	for(i=0;str[i]!='\n';i++)
		{
			if(str[i]==' ')
				{
					count++;
				}
		}
	printf("Output:\nNumber of white spaces = %d\n",count);
}
