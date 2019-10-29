#include<stdio.h>
main()
{
	int a,i,fact=1;
	printf("Enter the number\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",a,fact);
}
