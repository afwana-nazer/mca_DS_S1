#include<stdio.h>

	int main(){
		printf("Program to perform multiplication of two matrix");
		int a[10][10],b[10][10],result[10][10],m,n,p,q,i,j,k;
		
		printf("\n enter the rows and column of matrix A:");
		scanf("%d %d",&m, &n);
		
		printf("\n enter the rows and column of matrix B:");
		scanf("%d %d",&p, &q);
		
		if(n!=p){
			printf("\n we cannot multiply the matrix because column of matrix A should be equal to row of matrix B");
			return 0;
		}
		
		printf("\n enter the elements of matrix A");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("\n enter the elements of matrix B");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		for(i=0;i<m;i++) //initialize result matrix to zero
		{
			for(j=0;j<q;j++)
			{
				result[i][j]=0;
			}
		}
		
		for(i=0;i<m;i++) //multiply 2 matrix
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<n;k++)
				{
					result[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		
		printf("\n resultant matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%4d ",result[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	

