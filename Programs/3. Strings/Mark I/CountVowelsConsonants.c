/* QUE.5: C program to count the number of vowels and the number of consonants in the given string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int num_of_vowels=0,num_of_consonants=0,i;
	 
	printf("Enter the string you want to count the number of vowels and consonants in:\n");
	// Accept a string from th user
	fgets(str,sizeof(str)+1,stdin); 
	
	// Count the number of vowels and consonants
	for(i=0;str[i]!='\n';i++) 
		{
			if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u')
				{
					num_of_vowels++;
				}
			else if(str[i]!=' ')
				{
					num_of_consonants++;
				}
		}
		
		printf("Output:\nNumber of vowels = %d\nNumber of consonants = %d\n",num_of_vowels,num_of_consonants);
}
