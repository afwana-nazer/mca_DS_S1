 #include<stdio.h>
 
void  print(int a[],int i, int n)
{
	if(i==n)
	return ;
	
	printf("%d\t",a[i]);
	print(a,i+1,n);
}
 int main()
 {
 	int i,n;
 	printf("\n Array elements in the same order using a recursive function");
 	printf("\n enter the limit of array");
 	scanf("%d",&n);
 	int a[n];
 	
 	printf("\n enter the elements of the array");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\n The elements are:");
	 print(a,0,n);
	 return 0;
 }
