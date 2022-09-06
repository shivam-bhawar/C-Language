/* QUE. 15: C program to reverse a string using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char* str = NULL; // Null Pointer
	char temp;
	int length = 1,i = 0,j = 0,n = 0;
	
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
			
	printf("Input String = %s\n", str);
	
	printf("Output (Reversed) String = ");
	
	for( ; *(str+j)!='\0'; ) // Print the string in reverse word by word
		{
			for(i=n;*(str+i) ==' ' && *(str+(i+1))==' ';i++)
				{
				
				}
			n=i;	
			
			for( ;*(str+i) != ' ' && (*(str+(i+1)) !=' ' &&  *(str+(i+1)) != '\0');i++)
				{
				
				}
			j = i+1;
			
			for( ;i>=n;i--)
				{
					printf("%c",*(str+i));
				}
			n=j;
		}
		
	printf("\n");
	
	free(str); // Memory Deallocation
}
