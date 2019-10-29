#include<stdio.h>
main()
{
	int a;
	float b;
	printf("Enter the temperature in celsius\n");
	scanf("%d",&a);
	b=(a*9/5) + 32;
	printf("The temperature in Fahrenheit is %f\n",b);
}
