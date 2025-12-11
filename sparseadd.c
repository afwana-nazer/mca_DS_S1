#include<stdio.h>

int main()
{
	int a[10][10], b[10][10], sum[10][10],i,j,m,n;
	
	printf("\n enter the number of rows and column");
	scanf("%d %d",&m,&n);
	
	printf("\n enter matrix1");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n enter matrix 2 ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	printf("\n matrix1");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
		
		printf("\n");
	}
	
	printf("\n SUM\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",sum[i][j]);
		}
		
		printf("\n");
	}
	

	printf("\n sparse matrix representation:(rows,cols,value)");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sum[i][j]!=0)
			{
				printf("%3d %3d %3d\n", i,j,sum[i][j]);
			}
		}
		
		printf("\n");
	}
	
	return 0;
	
	
}
