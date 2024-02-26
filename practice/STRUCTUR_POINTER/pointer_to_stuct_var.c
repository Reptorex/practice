#include<stdio.h>

	
	struct s1
	{
		int age ;
		float salary;
	};
	
	int main()
{
	struct s1 raj = {21,15.5};
	struct s1 *ptr = &raj;

	printf("%d %f",ptr->age, ptr->salary);
}


