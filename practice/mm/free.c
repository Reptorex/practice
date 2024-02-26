#include<stdio.h>
#include<stdlib.h>

	int main()
{
	int *ptr,*ptr1,n,i;
	
	printf("entr :");
	scanf("%d",&n);

	ptr = (int*)malloc(n*sizeof(int));

	ptr1=(int*)calloc(n,sizeof(int));

	if(ptr == NULL || ptr1 == NULL)
	{
		printf("Mmry not allocated\n");
		exit(0);
	}
	else
	{
		printf("Mmry allocate using malloc\n");
		free(ptr);
	                      
		printf("Memry allocated using calloc\n");
		free(ptr1);
	}
}

	




