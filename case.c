#include<stdio.h>

void convertcase(char *s);
void convertcase(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=95)
		{
			s[i]=s[i]+32;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
}
int main()
{
	char s[50];
	printf("enter string");
	scanf("%s",&s);
	convertcase(s);
	printf("\nstring after conversion:%s",s);
	return 0;
}
