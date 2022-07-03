
#include<stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("numbers after swapping is %d and %d",*x,*y);
}

int main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("numbers after swapping is%d and %d",a,b);
	return 0;
}
