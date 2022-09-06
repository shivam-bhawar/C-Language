/* QUE.8: C program to accept a sentense from the user and print number of words in that sentence
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,num_of_words=0;
	
	printf("Enter the sentence you want to calculate the number of words in:\n");
	// Accept a string from the user
	fgets(str,sizeof(str)+1,stdin); 
	
	for(i=0;str[i]!='\n';i++)
		{
			if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\n'))
				{
					num_of_words++;
				}	
		}
		
	printf("Output\nNumber of words = %d\n",num_of_words);
}
