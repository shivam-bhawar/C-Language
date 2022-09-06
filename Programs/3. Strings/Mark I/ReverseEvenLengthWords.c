/* QUE.30: C program to accept a string from the user and reverse words from that string which are of even length
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
{
	char str[100];
	int i=0,j=0,n=0,flag=0;
	
	printf("Enter the string:\n");
	fgets(str,sizeof(str)+1,stdin);
		
	printf("Words of even length = ");
	for( ;str[j] != '\0'; ) // Print the string in reverse word by word
		{
			for(i=n;str[i] ==' ' && str[i+1]==' ';i++)
				{
					flag=1;
				}
			if(flag!=0)
				{
					i++;
				}
			n=i;	
			
			for( ;str[i] != ' ' && (str[i+1] !=' ' &&  str[i+1] != '\0' && str[i+1] != '\n');i++)
				{
				
				}
			j = i+1;
			
			if((j-n)%2==0)
				{
					for( ;n<=i;n++)
						{	
							if(str[n]!='\n')
								{
									printf("%c",str[n]);
								}
						}
					printf(" ");
				}
			n=j;
		}
	printf("\n");
}
