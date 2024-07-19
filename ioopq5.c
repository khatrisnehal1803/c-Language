#include<stdio.h>
#include<conio.h>

main()
{
	int firstyear;
	int lastyear;
	
	printf("enter the firstyear value:");
	scanf("%d",&firstyear);
	
	printf("enter the lastyear value:");
	scanf("%d",&lastyear);
	
	while(firstyear<=lastyear)
	{
		if(firstyear%4==0)
		{
			printf("%d\t",firstyear);
		}
		
		firstyear++;
	}
}