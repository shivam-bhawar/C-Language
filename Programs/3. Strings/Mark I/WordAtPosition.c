/* QUE.1: C program to accept a sentence and a position from the user and print the word at that position
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
	char str[100];
	int i=0,j=0,n=0,count=0,pos;
	
	printf("Enter the string:\n");
	fgets(str,sizeof(str)+1,stdin);
	
	printf("Enter the position of the word you want to be printed:\n");
	scanf("%d",&pos);
	
	printf("Word at position %d = ",pos);
	
	for( ;str[j] != '\0'; ) // Print the string in reverse word by word
		{
			for(i=n;str[i] ==' ' && str[i+1]==' ';i++)
				{
				
				}
			i++;
			n=i;	
			
			for( ;str[i] != ' ' && str[i+1] !=' ' &&  str[i+1] != '\0';i++)
				{
				
				}
			j = i+1;
			count++;
			
			if(count==pos)
				{
					for( ;n<=i;n++)
						{	
							if(str[n]!='\n')
								{
									printf("%c",str[n]);
								}
						}
					break;
				}
			n=j;
		}
	printf("\n");
}
