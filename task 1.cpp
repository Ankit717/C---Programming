#include<stdio.h>
main()
{
	char a[50],b[10];
	int c;
	printf("\nEnter the name : ");
	gets(a);
	printf("\nEnter the age : ");
	scanf("%d",&c);
	printf("\nEnter the phone number : ");
	scanf("%s",b);
	printf("\nName is %s",a);
	printf("\nAge is %d",c);
	printf("\nPhone number is ");
	puts(b);
}

