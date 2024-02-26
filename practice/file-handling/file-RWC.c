#include<stdio.h>
#include<string.h>

	int main()

{
	FILE* fptr;

	fptr = fopen("hulk.c","w");

	char r[50] = "hello wassup i dont have any thouts in my mind";

	if(fptr == NULL)
	{
		printf("failed to open");
	}
	else
	{
		printf("file is now opend");

		if(strlen(r)>0)
		{
			fputs(r,fptr);
			fput("\n",fptr);
		}

		fclose(fptr);

		printf("data wriitered and file is now closed");
	}
}
