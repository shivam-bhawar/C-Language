/* QUE. 16: C program to check whether given matrix is sparse or not
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],R,C,i,j,num_of_zero=0,num_of_nonzero=0;
	
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

	for(i=0;i<R;i++) // Check if the matrix is sparse matrix or not
		{
			for(j=0;j<C;j++)
				{
					if(array[i][j]==0)
						{
							num_of_zero++;
						}
					else
						{
							num_of_nonzero++;
						}
				}
		}
	
	if(num_of_zero>num_of_nonzero)
		{
			printf("Yes, given matrix is a sparse matrix\n");
		}
	else
		{
			printf("No, given matrix is'nt a sparse matrix\n");
		}
	
}
