#include<stdio.h>

	int main()
{
	int a,r;
        long long rev=0;
	printf("enter : ");
	scanf("%d",&a);

	while(a != 0)
	{
		r=a%10;
                rev=rev*10+r;
		a=a/10;
	}

	printf("%d/n",rev);

}
