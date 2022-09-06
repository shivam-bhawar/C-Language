/* QUE.2: C program to accept string with multiple spaces from user and print it with a single space as a delimeter
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,j;
	
	printf("Enter any string that you want to be printed with single spaces:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin); 
	
	
	printf("Output:\n");	
	// Print the string accepted from user but with single spaces
	for(i=0;str[i]!='\n';i++) 
		{
			if(str[i]==' ')
				{
					if(i==0)
						{
							for( ;str[i]==' ';i++)
								{
									
								}
						}
					for( ;str[i+1]==' ';i++)
								{
									
								}
				}
			printf("%c",str[i]);
		}
	printf("\n");
}
