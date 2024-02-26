#include<stdio.h>

	// why we need function pointer 
	/*
	 int main()
       {
	 int m=10,n=5;
	 swap(m,n);
	}

	 int swap(int a , int b)
	{
	 int temp;

	 temp=a;
	 q=b;
	 b=temp;

	}

	in this example actual value of parameters (m & n) is unchanged but if we have to change direct actual parameteres value then use of pointer. 

	*/

	int main()
{
	int m,n;

	printf("ENETR ");
	scanf("%d %d",&m,&n);

	swap(&m,&n);

	printf("%d %d ", m,n);

}
	int swap(int*a , int*b)
{
	int *temp;

	temp = *a;
	*a = *b;
	*b= temp;

}


