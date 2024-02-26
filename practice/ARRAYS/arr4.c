#include <stdio.h>

int main() {
    int arr[5], j, c = 0, i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        {
            if (arr[i] == arr[j])
            {
                c++;
                break; 
            }
        }
    }

    printf("Number of duplicate elements: %d", c);

}

