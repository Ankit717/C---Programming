#include<stdio.h>
main()
{
	char a[10],b[10],c[20],i,j;
	printf("Enter the first name\n");
	gets(a);
	printf("Enter the last name\n");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	c[i]=' ';
	i++;
	for(j=0;b[j]!='\0';j++)
	{
		c[i]=b[j];
		i++;
	}
	puts(c);
}
