#include<stdio.h>
main()
{
	int i=1,a=0,b=1,c,n;
	printf("enter a number..:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n\n%5d",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
}
