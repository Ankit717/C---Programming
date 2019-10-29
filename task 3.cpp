#include<stdio.h>
main()
{
	int a[3],sum=0;
	float avg;
	printf("Enter the marks of the three subjects\n");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/3;
	printf("The sum of the numbers in the three subjects is %d\n",sum);
	printf("The average of the numbers in the three subjects is %f\n",avg);
}
