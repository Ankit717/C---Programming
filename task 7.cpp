#include<stdio.h>
#include<string.h>
main()
{
	char a[30];
	printf("Enter the string\n");
	gets(a);
	int b=strlen(a);
	int count=0;
	for(int i=0;i<=(b/2);i++)
	{
		if(a[i]==a[b-1-i])
		count++;
	}
	if(count==(b/2 + 1))
	printf("Yes the string is a palindrome\n");
	else
	printf("No the string is not a palindrome\n");
}
