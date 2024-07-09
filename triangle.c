#include<stdio.h>
#include<conio.h>
main()
{
	int b,h,area;
	
	printf("enter the value for angle1:");
	scanf("%d",&b);
	
	printf("enter the value for angle2:");
	scanf("%d",&h);
	
	printf("enter the value for angle3:");
	scanf("%d",&area);
	
	area=2*b*h;
	printf("area of triangle: %d",area);
	
}