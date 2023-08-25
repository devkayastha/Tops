//task3:-write a program to check a given year is leap year not
#include<stdio.h>
main()
{
	int y;
	printf("Enter  a year:");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("this is a leap year");
	}
	else if(y%100==0)
	{
		printf("this is not a leap year");
	}
	else if(y%4==0)
	{
		printf("this is a leap year");
	}
	else
	{
		printf("this is not  a leap year");
	}
}
