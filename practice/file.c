#include<stdio.h>
{
	int main()
	{
		FILE* fptr;

		fptr = fopen ("/Home/practice/example.txt","w");

		if(fptr==NULL)
		{
			printf("file not created");
		}

		fclose(fptr);

		printf("file is created");
	}
