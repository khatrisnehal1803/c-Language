#include<stdio.h>
#include<conio.h>
main()
{
	float radius,area,pi=22/7;
	
	printf("enter the radius of circleL:");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	printf("the area of the circle is:%.2f\n",area);
}