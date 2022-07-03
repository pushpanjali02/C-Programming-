#include<stdio.h>

int main()
{
	int a[5],sum,mul,i;
	sum=0;
	mul=1;
	printf("enter eleents into array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("array element is %d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of elements is %d",sum);
	for(i=0;i<5;i++)
	{
		mul=mul*a[i];
	}
	printf("product of elements is %d",mul);
	return 0;
}

