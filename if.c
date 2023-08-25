//Conditional Statement:-
//1) if statement:-
//syntax:- if(condition){
//							true statement
//}

#include<stdio.h>
main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);
	if(marks>70)
	{
		printf("you will get a car");//true statement
		
	}
	else
	{
		printf("you will get a ricksha");//false statement
	}
}
