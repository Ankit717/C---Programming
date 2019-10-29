#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the numbers in the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0],max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("The largest element in an array is %d\n",max);
	printf("The smallest element in an array is %d\n",min);
}
