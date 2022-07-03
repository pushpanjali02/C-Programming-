
#include<stdio.h>
int main()
{
	char s[100],os[100];
	int i=0;
	printf("enter the string");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		//if(65<=s[i]<=90)
		if(s[i]>=65 && s[i]<=90)
		{
		
			os[i]=s[i]+32;
		}
		//else if(97<=s[i]<=122)
		else if(s[i]>=97 && s[i]<=122)
		{
			os[i]=s[i]-32;
		}
		else
		{
			os[i]=s[i];
		}
	}
	os[i]='\0';
	printf("converted string:%s\n",os);
	return 0;
}
		

