#include<stdio.h>

	struct t1
{
	int year;
	float time;
	char name[50];
};

	int main()
{
	struct t1 CAR1 = {1962,11.18,"Rolls Roys cloud"};
	view(CAR1);

}

void	view(struct t1 CAR1)

{
	printf("%d",CAR1.year);
	printf("%f",CAR1.time);
	printf("%s",CAR1.name);
}
