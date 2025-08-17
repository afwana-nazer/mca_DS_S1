#include<stdio.h>
int main()
{
	int a[10][10],i,m,n,j,transpose[10][10];
	
	printf("\nprogram to find the transpose of a matrix");
	
	printf("\n enter the rows and column of matrix");
	scanf("%d %d",&m ,&n);
	
	printf("\nenter the elements of the matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n  the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
		
	}
	
	for(i=0;i<m;i++) //we did transpose of matrix
	{
		for(j=0;j<n;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	
	printf("\ntranspose of a matrix is:\n");
	for(i=0;i<n;i++) //here rows became column 
	{
		for(j=0;j<m;j++) //column became rows
		{
			printf(" %4d",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
