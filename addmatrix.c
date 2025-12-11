#include<stdio.h>

void sum(int n,int a[n][n],int b[n][n],int sum[n][n] ){
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\n sum of matrices:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",sum[i][j]);
		}
		printf("\n");
	}
}

difference(int n, int a[n][n],int b[n][n],int diff[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			diff[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\n the difference is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",diff[i][j]);
		}
		printf("\n");
	}
}
int main()
{

int n,i,j;
printf("\n enter the size of the matrix(nxn):");
scanf("%d",&n);

int a[n][n], b[n][n], sum_result[n][n], diff_result[n][n];

printf("\n enter the elements of first matrix:");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

printf("\n enter the elements of second matrix:");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[i][j]);
	}
}

sum(n,a,b,sum_result);
difference(n,a,b,diff_result);
return 0;
}

