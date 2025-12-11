#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m ,transpose[10][10];
	
	printf("\n enter the no of rows and colums:");
	scanf("%d %d",&m,&n);
	
	printf("\n enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n the array:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n the transpose\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%4d",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
