#include<stdio.h>
#include<stdlib.h>

	int main()
{
	FILE* fptr;

	fptr = fopen("mehul.txt","w");

	if(fptr == NULL )
	{
		printf("the file if not opened exit");

		exit(0);
	}
	else
	{
		printf("the file id created");
	}
}

