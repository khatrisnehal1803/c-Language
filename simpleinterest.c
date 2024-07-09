#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,c,simpleinterest;
	
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the value of c:");
	scanf("%f",&c);
	
	simpleinterest = (a*b*c)/100;
	printf("simple interest %f",simpleinterest);
}