#include<stdio.h>
main()
{
	int a,sum=0,b;
	printf("Enter the number to be checked as amstrong number\n");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		sum = sum + (a%10)*(a%10)*(a%10);
		a=a/10;
	}
	if(sum==b)
	printf("Yes the number belongs to the amstrong number\n",b);
	else
	printf("No the number does not belongs to the amstrong number\n",b);
}
