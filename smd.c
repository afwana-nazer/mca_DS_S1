#include<stdio.h>
int  a[5],pos=-1;

void insert(n)
{
	if(pos+1==5)
	{
		printf("the array is full");
		
	}else{
		
		a[++pos]=n;
	}
 } 
 
 int deleteelement()
 {
 	if(pos==-1)
 	{
 		printf("\n the element is empty");
 		
	 } else
	 {
	 	printf("%d",a[pos--]);
	 }
 }
 
 void search(int key)
 {
 	int i,flag=0;
 	for(i=0;i<=pos;i++)
 	{
 		if(a[i]==key)
 		{
 		        flag=1;
 		        break;
		 }
		
		 if(flag==0)
		 {
		 	printf("\nelement not found");
		 }
		 else
		 {
		 	printf("element element found");
		 }
	 }
 }
 
 void sort()
 {
 	int i,temp=0,j;
 	for(i=0;i<=pos;i++)
 	{
	   for(j=i+1;j<=pos;j++)
 	   {
 		if(a[i]>a[j])
 		{
 		   temp=a[i];
		   a[i]=a[j];
		   a[j]=temp;
		   		
		 }
	   }  
}
	 
	 for(i=0;i<=pos;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 
 }
 
 void display()
 {
 	int i;
 	for(i=0;i<=pos;i++)
 	{
 		printf("%d\t", a[i]);
	 }
	 
	 printf("\n");
 }
int menu()
{
	int choice;
	printf("\n INSERT 1\n DELETE 2\n SEARCH 3\n SORT 4\n DISPLAY 5\n EXIT 6\n  enter your choice");
	scanf("%d",&choice);
	return choice;
}


void processarray()
{
	int choice,value,key;
	for(choice=menu(); choice!=6 ; choice=menu())
	{
		switch(choice)
		{
			case 1: 
			        printf("enter the value to insert");
			        scanf("%d",&value);
			        insert(value);
			        break;
		    case 2: 
		            deleteelement();
		            break;
		    case 3:
		    	   
		    	    printf("\nenter the value to search");
		    	    scanf("%d",&key);
		    	    search(key);
		    	    
		    	    break;
		    case 4:
		    	    sort();
		    	    break;
		    	    
		    case 5:
		    	    display();
		    	    break;
		    default:
		    	    printf("error:wrong choice");
		    	    break;
		    
		    	    
		    	    
			        
			
						}
	}
}
int main()
{
	 processarray();
	 return 0;
}
