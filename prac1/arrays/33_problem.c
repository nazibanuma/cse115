#include <stdio.h>
// Write a program reads two arrays from user and then output their product

int main()
{
    int arr1[3], arr2[3], product = 1;

    printf("elements for the first array: \t");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("elements for the second array: \t");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        product = arr1[i] * arr2[i];
        printf("\nthe %dth of the product is: %d", i, product);
    }

    return 0;
}