#include<stdio.h>

	int main()

{
	int n,i,sum=0,*ptr;

	printf("enter :");
	scanf("%d",&n);

	ptr = (int*)  malloc (sizeof(int));

	if(ptr==NULL)

	{
		printf("memmory Not allocated");
		exit(0);
	}

	for(i=0;i<=n;i++)
	{
		scanf("%d",ptr+i);
		sum = sum+ *(ptr + i);
	}

	printf("sum = %d",sum);
	free(ptr);
}
