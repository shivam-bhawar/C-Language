/* QUE. 8: C program to check whether given string is palindrome or not using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
		char* str = NULL; // Null Pointer
		char temp;
		int length = 1,i = 0,j,flag=0;
		
		str = (char*) malloc (sizeof(char)+0); // Memory Allocation
		*(str + 0) = '\0';
		
		printf("Enter the String:\n");
		
		do
			{
				scanf("%c",&temp);
				
				if(temp != '\n')
					{
						length++;
						str = realloc (str,length*sizeof(char)); // Memory Reallocation
						*(str + i) = temp;
						*(str + (i + 1)) = '\0';
						i++;
					}
			}while(temp != '\n');
			
		printf("%s\n", str);
		
		for(i=0,j = (length-1-1);i<=j;i++,j--)  // Check if the string is a palindrome or not
			{
				if(*(str+i) != *(str+j))
					{
						printf("String is not a palindrome\n");
						flag=1;
						break;
					}
			} 
		if(flag==0)
			{
				printf("String is a palindrome\n");
			}
}

