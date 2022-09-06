/* QUE.7: C program to replace space with '$' in given string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	
	printf("Enter the string you want to replace spaces with '$' in:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin); 
	
	printf("Output:\n");
	// Print the string accepted from the user but replace ' ' with '$'
	for(i=0;str[i]!='\n';i++) 
		{	
			if(str[i]==' ')
				{
					printf("$");
				}
			else
				{
					printf("%c",str[i]);
				}
		}
	printf("\n");
}
