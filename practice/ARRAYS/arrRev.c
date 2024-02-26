#include <stdio.h>

int main() 
{
    
    int arr[30],i;
    
    for(i=1;i<=5;i++)
    {
        printf("enetr elements no %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=5;i>=1;i--)
    {
        printf("\n%d",arr[i]);
    }
}
