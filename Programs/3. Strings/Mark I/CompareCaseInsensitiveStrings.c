/* QUE.27: C program to accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return diffrence between first mismatch charecter
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,j,diffrence,flag=0;
	
	printf("Enter the first string:\n");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the second string:\n");
	fgets(str2,sizeof(str2),stdin);
	
	printf("Output:\n");
	for(i=0;str1[i]!='\n';i++)
		{
			if(str1[i]!=str2[i] && str1[i]!=str2[i]+32 && str1[i]!=str2[i]-32)
				{
					if(str1[i]>str2[i])
							printf("Diffrence = %d\n",str1[i]-str2[i]);
					else
						{
							printf("Diffrence = %d\n",str2[i]-str1[i]);
						}
					flag++;
					break;
				}
		}
		
	if(flag==0)
		{
			printf("0\n");
		}
	
}
