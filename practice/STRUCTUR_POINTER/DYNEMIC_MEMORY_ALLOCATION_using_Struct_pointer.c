#include <stdio.h>
#include<stdlib.h>

struct s1
{
    int age;
    float weight;
};

int main()
{
    int n,i;
    
    printf("How many students data : ");
    scanf("%d",&n);
    
    struct s1* ptr;
    ptr = (struct s1*)malloc(n*sizeof(struct s1));
    
    for(i=0;i<n;i++)
    {
        printf("Enter Age & Name");
        scanf("%d %f",&(ptr+i)->age,&(ptr+i)->weight);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d %f",(ptr+i)->age,(ptr+i)->weight);
    }
    
    free(ptr);
}

