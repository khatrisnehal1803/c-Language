#include<stdio.h>
#include<conio.h>
main()
{
	float side,area;
	
	printf("enter the side length of sqare:");
	scanf("%f",&side);
	
	area = side*side;
	printf("area of sqare =%.0f",area);
}