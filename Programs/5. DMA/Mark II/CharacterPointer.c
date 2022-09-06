/* QUE. 3: C program to accept a string from user and print string using charecter pointer only (Static Memory Allocation)
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char string[100];
	char* p = string;
	int i;
	
	printf("Enter the string:\n");
	fgets(string,sizeof(string)+1,stdin);
	
	for(i=0;*(p+i)!='\0';i++) // Print the string charecter by charecter
		{
			printf("%c",*(p+i));
		}	
}
