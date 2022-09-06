/* QUE.9: C program to  replace Good name in mail
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100]="Hello Good Name";
	char name[94];
	int i,j=0;
	
	printf("Enter your Good name:\n");
	// Accept a string from the user
	fgets(name,sizeof(name)+1,stdin); 
	
	for(i=6;name[j]!='\n';i++) // Copy users Good name in first string
		{
			str[i]=name[j];
			j++;
		}
	str[i]='\n';	
	
	printf("Output:\n");
	for(i=0;str[i]!='\n';i++)
		{
			printf("%c",str[i]);
		}
		
	printf("\n");
}
