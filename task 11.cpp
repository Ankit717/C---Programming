#include<stdio.h>
struct book
{
	char title[50];
	char author[20];
	char genre[50];
};
main()
{
	struct book b;
	printf("Enter the book details");
	printf("\nTitle : ");
	gets(b.title);
	printf("\nAuthor : ");
	gets(b.author);
	printf("\nGenre : ");
	gets(b.genre);
	printf("\nThe book title is %s",b.title);
	printf("\nThe book author is %s",b.author);
	printf("\nThe book genre is %s",b.genre);
}
