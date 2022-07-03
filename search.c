#include<stdio.h>
int searchele(int *a,int ele,int n);
int searchele(int *a,int ele,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("comapring %d, %d, %d\n", a[i], ele, i);
		if(a[i]==ele)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[50],n,ele,i,v;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element:");
        scanf("%d",&ele);
	v=searchele(a,ele,n);
	if(v==-1)
	{
		printf("not found");
	}
	else
	{
		printf("Found at %d",v);
	}
	return 0;
}
	
