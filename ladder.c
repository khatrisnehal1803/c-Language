#include<stdio.h>
#include<conio.h>

main()
{
	int number;
	
	printf("enter the number :");
	scanf("%d",&number);
	
	if (number>0)
	{
		printf("this number is positive!");
	}
	
	else if (number<0)
	{
		printf("this number is negative !");
	}
	
	else
	{
		printf("this number is neutal  !");
	}
	
}