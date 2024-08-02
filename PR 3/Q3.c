#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter A Number =");
	scanf("%d",&n);
	
	int ld=n%10;
	
	printf("Last Digit :%d\n",ld);
	
	while(n>9)
	{
		n=n/10;
	}
	
	printf("First digit:%d\n\n",n);
	printf("Sum Of First Digit And Last Digit = %d",ld+n);
}