#include<stdio.h>
main()
{
	int num1,num2;
	printf("Enter a num1:");
	scanf("%d",&num1);
	printf("Enter a num2:");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("num1  is greater");
	}
	else if(num2>num1)
	{
		printf("num2 is greater");
	}
	else
	{
		printf("both are same num");
	}
	
}
