//task1:write a program to find max between three num:-user input
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a num1:");
	scanf("%d",&a);
	printf("Enter a num2:");
	scanf("%d",&b);
	printf("Enter a num3:");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a is greater");
	}
	else if(b>a&&b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
	
}
