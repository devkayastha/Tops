#include<stdio.h>
main()
{
	int num;
	printf("Enter a num:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("num is positive");
	}
	else if(num<0)
	{
		printf("num is negative");
	}
	else
	{
		printf("num is zero");
	}
	
}
