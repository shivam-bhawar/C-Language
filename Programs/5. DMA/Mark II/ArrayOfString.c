/* QUE. 14: C program to store and display multiple (10) strings in one 1-D array using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
		char* str = NULL; // Null Pointer
		char temp;
		int length = 1,i = 0;
		
		str = (char*) malloc (sizeof(char)+0); // Memory Allocation
		*(str + 0) = '\0';
		
		printf("Enter the Strings:\n");
		
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
}

