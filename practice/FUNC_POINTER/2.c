#include<stdio.h>

	int add(int a , int b)
{
	return (a+b);
}

	int main()
{
	int  (* plus);
	plus = &add;

	printf("%d",plus(5,3));

}
