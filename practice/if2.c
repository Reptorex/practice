#include<stdio.h>

int main()
{
	int a,b,c;

	scanf("%d %d %d ",&a, &b, &c);

	if(a>b && a>c)
	{
		printf("a is ...");
	}
	else if(b>a && b>c)
	{
		printf("b is ...");
	}
	else
	{
		printf("c is ...");
	}
}

