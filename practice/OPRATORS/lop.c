#include <stdio.h>

    int main()
{
    int a = 5, b = 10;

    if (a > 0 && b > 0)
    {
        printf("Bot greater than 0\n");
    }
    else
    {
        printf("At least one is not greater than 0\n");
    }

    if (a > 0 || b > 0) 
    {
        printf("At least one greater than 0\n");
    }
    else 
    {
        printf("both less then 0\n");
    }

    if (!(a < b)) 
    {
        printf("a is greater than b\n");
    } 
    else
    {
        printf("a is not greater than b\n");
    }
}

