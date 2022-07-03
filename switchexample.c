#include<stdio.h>

int main()
{
	int a,b;
	int op;
	float output;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("Operation numbers:\n1. addition\n2.sub\n3.Mul\n4.Divide\nenter operation:");
	scanf("%d",&op);
	switch(op) {
		case 1:
		{
			output=a+b;
			printf("%f",output);
		}
		break;
		case 2:
		{
			output=a-b;
			printf("%f",output);
		}
		break;
		case 3:
		{
			output=a*b;
			printf("%f",output);
		}
		break;
		case 4:
		{
			output=a/b;
			printf("%f",output);
		}
		break;
		default:
		{
			printf("invalid operation");
			return -1;
		}
	}
	return 0;
}
	
	

