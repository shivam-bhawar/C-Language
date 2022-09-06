/* QUE. 17: C program to count repeated words in given string using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char** p = NULL; // NULL Pointer
	char temp;
	int num_of_words,length,i,j,k,flag,count=1;
	
	printf("Enter the number of words for the string :\n");
	scanf("%d",&num_of_words);
	
	p = (char **) malloc (num_of_words*sizeof(char*)); // Memory Allocation
	
	for(i=0;i<num_of_words;i++)
		{	
			k=0;
			length=1;
			(*(p+i)) = (char*) malloc (sizeof(char)+0); // Memory Allocation
			(*(*(p+i)+0)) = '\0';
			
			printf("Enter the word:\n");	
			scanf(" ");
			do 
				{
					scanf("%c",&temp);
						
					if(temp != '\n')
						{
							length++;
							(*(p+i)) = realloc ((*(p+i)),length*sizeof(char)); // Memory Reallocation
							*((*(p+i)) + k) = temp;
							*((*(p+i)) + (k+1)) = '\0';
							k++;
						}
				}while(temp != '\n');
		}
		
	printf("Input String :\n");
	for(i=0;i<num_of_words;i++)  // Print the string
		{	
			printf("%s ", (*(p+i))  );
		} 
	printf("\n");
	
	for(i=0;i<num_of_words;i++) 
		{	
			count = 0;
			
			for(j=0;j<num_of_words;j++)
				{
					for(k=0;(*(*(p+i)+k)) != '\0' || (*(*(p+j)+k)) != '\0';k++)
						{
							if(*(*(p+i)+k) != *(*(p+j)+k))
								{
								 flag=1;
								 break;
								}
							else
								{
									flag=0;
								}
						}
					if(flag==0)
						{
							count++;
						}
				}
			printf(" '%s' is repeated %d times\n",(*(p+i)),count-1);
		} 
	
	for(i=0;i<num_of_words;i++) // Memory Deallocation
		{
			free(*(p+i));
		}
	
	free(p); // Memory Deallocation
}
