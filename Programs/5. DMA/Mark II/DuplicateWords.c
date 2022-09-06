 /* QUE. 16: C program to print only those words from one string which are present in given another string using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char*** p = NULL; // NULL Pointer
	char temp;
	int num_of_words,length,i,j,k,flag=0,z;
	
	printf("Enter the number of words for the strings :\n");
	scanf("%d",&num_of_words);
	
	p = (char ***) malloc (2*sizeof(char*)); // Memory Allocation
	
	for(i=0;i<2;i++) // Memory Allocation
		{
			*(p+i) = (char**) malloc (num_of_words*sizeof(char*));
		}
		
	for(i=0;i<2;i++)
		{
			printf("Enter the string %d (word by word) :\n",i+1);
			for(j=0;j<num_of_words;j++)
				{		
					k=0;
					length=1;
					(*(*(p+i)+j)) = (char*) malloc (sizeof(char)+0); // Memory Allocation
					(*(*(*(p+i)+j) + 0)) = '\0';
					
					scanf(" ");
					do
						{
							scanf("%c",&temp);
							
							if(temp != '\n')
								{
									length++;
									*(*(p+i)+j) = realloc (*(*(p+i)+j),length*sizeof(char)); // Memory Reallocation
									*(*(*(p+i)+j) + k) = temp;
									*(*(*(p+i)+j) + (k + 1)) = '\0';
									k++;
								}
						}while(temp != '\n');
				}
		}
	
	for(i=0;i<2;i++) // Print both the strings
		{	
			printf("String %d = ",i+1);
			for(j=0;j<num_of_words;j++)
				{	
					printf("%s ",   *(*(p+i)+j)  );
				}
			printf("\n");
		} 
	
	printf("Words from first string which are present in second string are :\n");
	for(i=0;i<1;i++)
		{
			for(j=0;j<num_of_words;j++)
				{
					for(z=0;z<num_of_words;z++)
						{
							flag=0;
							for(k=0; (*(*(*(p+i)+j)+k)) != '\0' && (*(*(*(p+(i+1))+z)+k)) != '\0';k++)
								{
									if((*(*(*(p+i)+j)+k)) != (*(*(*(p+(i+1))+z)+k)))
										{
											flag=1;
											break;
										}
								}
							if(flag==0)
								{
									printf("%s\t",*(*(p+i)+j));
								}
						}
				}
		}
	printf("\n");
	
	for(i=0;i<2;i++) // Memory Deallocation
		{
			for(j=0;j<num_of_words;j++)
				{		
					free(*(*(p+i)+j));
				}
		}
		
	for(i=0;i<2;i++) // Memory Deallocation
		{
			free(*(p+i));
		}
	
	free(p); // Memory Deallocation
}
