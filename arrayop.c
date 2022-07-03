
#include<stdio.h>

int main()
{
	int a[10],n,i,s,sum=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("All elements in array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("All odd index elements in array:\n");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",a[i]);
		}
	}
        printf("All even index elements in array:\n");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
        printf("Square of all elements in array:\n");
	i=0;
	while(i<n)
	{
		s=a[i]*a[i];
		printf("%d --> %d\n",a[i],s);
		i++;
	}
	i=0;
	printf("Cumulative sum of all elements for given array\n");
	do
	{
		sum=sum+a[i];
		printf("%d --> %d\n",a[i],sum);
		i++;
	}while(i<n);
	return 0;
}
