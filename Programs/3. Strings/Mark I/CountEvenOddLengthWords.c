/* QUE.14: C program to accept a sentence from the user and print number of words of even and odd length from that sentence
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,even=0,odd=0;
	
	printf("Enter the sentence:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin);
	
	for(i=0;str[i]!='\n';i++)
		{
			if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\n'))
				{
					if(i%2==0)
						{
							even++;
						}
					else
						{
							odd++;
						}
				}
		}
	printf("Output:\nEven = %d\nOdd = %d\n",even,odd);
}
