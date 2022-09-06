/* QUE.3: C program to print count of number of charecters in a given string
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str[100];
	int i,num_of_char=0;
	
	printf("Enter the string you want to count the number of charecters in:\n");
	// Accept a string from the user
	fgets(str,sizeof(str),stdin); 
	
	// Count the number of charecters in entered string
	for(i=0;str[i]!='\n';i++) 
		{
			if(str[i]!=' ')
				{
					num_of_char++;
				}
		}
	
	printf("Output:\nNumber of charecter = %d\n",num_of_char);
}
