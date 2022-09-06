/* QUE. 19: C program to check whether given strings are Anagram or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,j,diffrence,count;
	
	printf("Enter the first string:\n");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the second string:\n");
	fgets(str2,sizeof(str2),stdin);
	
	for(i=0;str1[i]!='\n';i++)
		{
			count=0;
			for(j=0;str2[j]!='\n';j++)
				{
					if(str1[i]==str2[j])
						{
							count++;
						}
					if(count!=0)
						{
							break;
						}
				}
			if(count==0)
				{
					break;
				}
		}
	if(count==0)
		{
			printf("No, Strings ar'nt Anagram Strings\n");
		}
	else
		{
			printf("Yes, Strings are Anagram Strings\n");
		}
	
}
