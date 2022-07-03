#include<stdio.h>

void grade(int x,int y,int z);
void grade(int x,int y,int z)
{
	int p;
	p=((x+y+z)/30);
	printf("Percentail tailing to 10: %d", p);
	switch(p)
	{
		case 5:
		{
			printf("f");
		}break;
		case 6:
		{
			printf("d");
		}break;
		case 7:
		{
			printf("c");
		}break;
		case 8:
		{
			printf("b");
		}break;
		case 9:
		{
			printf("a");
		}break;
		default:
		{
			printf("invalid marks");
		}
	
	}
}
int main()
{
	int m,ss,p,s;
	printf("enter marks");
	scanf("%d%d%d",&m,&ss,&s);
	grade(m,ss,s);
	return 0;
}

	
