//task4:write a p8rogram to check a triangle is equilateral,isosceles,or scalene

#include<stdio.h>
main()
{
	int s1,s2,s3;
	printf("Enter side1 of triangle:");
	scanf("%d",&s1);
	printf("Enter side2 of triangle:");
	scanf("%d",&s2);
	printf("Enter side3 of triangle:");
	scanf("%d",&s3);
	if(s1==s2 && s2==s3)
	{
		printf("This is a equilateral\n");
	}
	if(s1==s2 ||s2==s3||s3==s1)
	{
		printf("This is  isosceles\n");
	}
	else
	{
		printf("this is a scalene\n");
	}
	
}
