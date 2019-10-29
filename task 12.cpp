#include<stdio.h>
main()
{
	int a;
	float b,c;
	printf("1. Celcius to fahrenheit \n2. Fahrenheit to celcius \n3. Exit\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:printf("Enter the temperature in Celcius\n");
			   scanf("%f",&b);
			   c=b*9/5 +32;
			   printf("temperature in Fahrenheit is %f\n",c);break;
		case 2:printf("Enter the temperature in Farenheit\n");
			   scanf("%f",&b);
		       c=(b-32)*5/9;
			   printf("temperature in Celcius is %f\n",c);break;
		case 3:break;
		default:printf("Invalid\n");
	}
}
