
#include<stdio.h>

int main()
{
	int i;
	char s[25];
	printf("enter string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
	}
	printf("string size is %d\n",i);

	i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("string size is %d\n",i);
	i=0;
	do
	{
		i++;
	}
	while(s[i]!='\0');
	printf("string size is %d",i);
	return 0;
}
