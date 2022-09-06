/* QUE.1: C program to accept a string from the user and check whether is palindrome or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,j,flag=0;
	
	printf("Enter the string you want to check whether is palindrome or not:\n");
	fgets(str,sizeof(str)+1,stdin); 
	
	for(i=0;str[i+1]!='\n';i++) 
		{
			
		}
	for(j=0;j<=i;j++,i--)
		{
			if(str[j]!=str[i])
				{
					flag++;
					break;
				}
		}	
	if(flag==0)
		{
			printf("Entered string is a palindrome\n");
		}
	else
		{
			printf("Entered string is not a palindrome\n");		
		}
}
