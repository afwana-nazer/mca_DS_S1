#include<stdio.h>
void print(int a[],int i)
{
	if(i<0)
	return;
	
	printf("%d\t",a[i]);
	print(a,i-1);
}
int main()
{
	int i,n;
	printf("\nDisplay array elements in reverse order using a recursive function ");
	printf("\n enter the limit of the array");
	scanf("%d",&n);
	
	int a[n];
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n the array elements in reverse order is:");
	print(a,n-1);
	return 0;
}
