//task2:- write  a program to check a given number is divisble by 5 and 11 or not  

#include<stdio.h>
main()
{
	int num;
	printf("Enter a num:");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("it is divided by 5");
	}
	else if(num%11==0)
	{
		printf("it is divided by 11");
	}
	else
	{
		printf("it is not divided by both of 5 and 11");
	}
}
