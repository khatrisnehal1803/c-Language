#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,sum;
	
	printf("enter the n=");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("sum = %d+%d;\t sum = %d\n",sum,i,sum+i);
		sum=sum+i;
		i++;
	}
	printf("sum is %d",sum);
}