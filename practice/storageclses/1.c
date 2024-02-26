#include<stdio.h>


	int main()
{
	fun();
	fun();
	fun();
}      

	fun()
{
	int a=1;
	static int b=1;
	
	printf("%d",a);
        printf("%d",b);

	a++;
	b++;
}

