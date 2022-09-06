/* QUE. 3 : Write a C program to print all alphabets from a to z (Using while loop)
PPA8_Shivam_Bhawar */

#include<stdio.h>

void main()
{
	char alphabet = 'a';
	
	printf("Small letters = ");
	while(alphabet <= 'z') 
	{
		printf("%c, ", alphabet);
		alphabet++;
	}
	printf("\n");
	
	alphabet = 'A';
	
	printf("Capital letters = ");	
	while(alphabet <= 'Z') 
	{
		printf("%c, ", alphabet);
		alphabet++;
	}
	printf("\n");
}
