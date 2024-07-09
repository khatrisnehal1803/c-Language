#include<stdio.h>
#include<conio.h>
main()
{
	float pi=3.14,redius,area;
	
	printf("enter the value of redius:");
	scanf("%f",&redius);
	
	area = pi*redius*redius;
	printf("area =%.2f",area);
}