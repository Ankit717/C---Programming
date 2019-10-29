#include<stdio.h>
main()
{
	int a=0,i,b;
	printf("Enter the number\n");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		b = a * i;
		printf("5 * %d = %d\n",i,b);
	}
}
