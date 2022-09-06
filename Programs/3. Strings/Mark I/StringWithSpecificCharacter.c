/* QUE.11: C program to accept a string from user which contains charecters from'b' to 'y'
PPA8_Shivam_Bhawar */
 #include<stdio.h>
void main()
{
	char str[100];
	int i=0;
	
	printf("Enter the string:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin);
	
	printf("Output:\n");
	for(i=0;str[i]!='\n';i++)
		{
			if(str[i]!='a' && str[i]!='z' && str[i]!='A' && str[i]!='Z')
				{
					printf("%c",str[i]);
				}
		}
	printf("\n");
}
