/* QUE.4: C program to accept a string and print it in reverse order
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	
	printf("Enter the string you want to be printed in reverse order:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin); 
		
	for(i=0;str[i+1]!='\n';i++) 
		{
		
		}
		
	printf("Output:\n");
	// Print the string accepted but in reverse order
	for(  ;i>=0;i--) 
		{
			printf("%c",str[i]);
		}
	printf("\n");
}
