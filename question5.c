#include<stdio.h>
int a[20],n;
void read() //read the elements of the array
{
	int i;
	printf("\nenter the limit");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void sort() //function to sort array
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
}

 void disp() // display sorted array
{
	int i;
	printf("\nthe sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


int main()
{
	printf("\nSORT THE ARRAY ELEMENTS IN ASCENDING ORDER");
	read();
	sort();
	disp();
	
	return 0;
}
