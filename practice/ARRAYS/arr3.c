#include <stdio.h>

    int main() 
{
    int arr[5], arr1[5], i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        arr1[i] = arr[i];
    }
    
    for (i = 0; i < 5; i++) 
    {
        printf("%d", arr[i]);
    }
    
    printf("\n");
    
    for (i = 0; i < 5; i++) 
    {
        printf("%d", arr1[i]);
    }
    
}

