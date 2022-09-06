/* QUE.1: C program to accept a string with multiple spaces from user and print as it is
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	
	printf("Enter the string you want to be printed:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin); 
	
	printf("Output:\n");
	// Print the string accepted from the user
	for(i=0;str[i]!='\n';i++) 
		{
			printf("%c",str[i]);
		}
	printf("\n");
}
