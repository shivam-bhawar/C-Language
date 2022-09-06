/* QUE.6: C program to reverse the given string
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
	char str[100];
	int i=0,j=0,n=0;
	
	printf("Enter the string:\n");
	fgets(str,sizeof(str)+1,stdin);
	
	printf("Output (Reversed) String :\n");
	
	for( ;str[j] != '\0'; ) // Print the string in reverse word by word
		{
			for(i=n;str[i] ==' ' && str[i+1]==' ';i++)
				{
				
				}
			n=i;	
			
			for( ;str[i] != ' ' && str[i+1] !=' ' &&  str[i+1] != '\0';i++)
				{
				
				}
			j = i+1;
			
			for( ;i>=n;i--)
				{	
					if(str[i]!='\n')
						{
							printf("%c",str[i]);
						}
				}
			n=j;
		}
		
	printf("\n");
}
