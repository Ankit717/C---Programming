#include<stdio.h>
main()
{
	int a=0,b=0;
	printf("Enter the number to be reversed\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b = b*10 +a%10;
		a=a/10;
	}
	printf("The reversed number is : %d\n",b);
}
