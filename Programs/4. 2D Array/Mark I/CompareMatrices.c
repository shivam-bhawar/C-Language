/* QUE. 15: C program to check whether given matrices are equal or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array1[10][10],R1,C1,array2[10][10],R2,C2,i,j,flag=0;
	
	printf("Enter the number of rows for first matrix:\n");
	scanf("%d",&R1);
	printf("Enter the number of columns for first matrix:\n");
	scanf("%d",&C1);
	printf("Enter the number of rows for second matrix:\n");
	scanf("%d",&R2);
	printf("Enter the number of columns for second matrix:\n");
	scanf("%d",&C2);
	
	printf("Enter the elements for first matrix:\n");
	for(i=0;i<R1;i++) // Accept the elements for the first matrix
		{
			for(j=0;j<C1;j++)
				{
					scanf("%d",&array1[i][j]);
				}
		}
		
	printf("Enter the elements for second matrix:\n");
	for(i=0;i<R2;i++) // Accept the elements for the second matrix
		{
			for(j=0;j<C2;j++)
				{
					scanf("%d",&array2[i][j]);
				}
		}
	
	printf("First matrix is:\n");
	for(i=0;i<R1;i++) // Print the elements from the first matrix
		{
			printf("|\t");
			for(j=0;j<C1;j++)
				{
					printf("%d\t",array1[i][j]);
				}
			printf("|\n");
		}
		
	printf("Second matrix is:\n");
	for(i=0;i<R2;i++) // Print the elements from the second matrix
		{
			printf("|\t");
			for(j=0;j<C2;j++)
				{
					printf("%d\t",array2[i][j]);
				}
			printf("|\n");
		}
	
	if(R1==R2 && C1==C2) 
		{
			for(i=0;i<R1;i++) // Check if the two matrices are equal or not
				{
					for(j=0;j<C1;j++)
						{
							if(array1[i][j]!=array2[i][j])
								{
									flag=1;
									break;
								}
						}
				}
			if(flag==0)
				{
					printf("Both of given matrices are equal\n");
				}
			else
				{
					printf("Both of given matrices are'nt equal\n");
				}
		}
	else
			{
				printf("Both of given matrices are'nt equal\n");
			}
}
