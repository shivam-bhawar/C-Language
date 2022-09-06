/* QUE. 11: C program to check whether tthe given matrix is a upper triangular matrix or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],R,C,i,j,flag=0;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&R);
	printf("Enter the number of columns:\n");
	scanf("%d",&C);
	
	printf("Enter the elements:\n");
	for(i=0;i<R;i++) // Accept all the elements for the matrix
		{
			for(j=0;j<C;j++)
				{
					scanf("%d",&array[i][j]);
				}
		}

	printf("Matrix is:\n");
	for(i=0;i<R;i++) // Print all the elements from the matrix
		{
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",array[i][j]);
				}
			printf("|\n");
		}
			
	for(i=0;i<R;i++) // Check if the given matrix is an upper triangular matrix or not
		{
			for(j=0;j<C;j++)
				{
					if(i>j)
						{
							if(array[i][j]!=0)
								{
									flag=1;
									break;
								}
						}
				}
		}
	
	if(flag==0)
		{
			printf("Yes, given matrix is an upper triangular matrix\n");
		}
	else
		{
			printf("No, given matrix is'nt an upper triangular matrix\n");
		}
} 
