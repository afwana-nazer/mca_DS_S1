#include<stdio.h>
int value=100;

void show()
{
	int value=50;
	printf("\nlocal value:%d",value);
}

void staticvar()
{
	static int y=0;
	y++;
	printf("\ny=%d\n",y);
} 

void display()
{
	register int i;
	for(i=0;i<=5;i++)
	{
		printf("\n%d",i);
	}
}

int main()
{
	show();
	printf("\nglobal value:%d",value);
	staticvar();
	staticvar();
	display();
	return 0;
}
