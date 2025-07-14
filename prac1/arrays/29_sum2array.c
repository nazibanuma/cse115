#include <stdio.h>

int main()
{
    // C Program to read two arrays from user, add them, and then output their sum
    int arr1[6], arr2[6], sum = 0;

    printf("enter element of first array:");
    for (int i = 0; i < 6; i++)
    {

        scanf("%d", &arr1[i]);
    }
    printf("enter element of second array:");

    for (int i = 0; i < 6; i++)
    {

        scanf("%d", &arr2[i]);
    }
    printf("\n");
    printf("the sum of both arrays:");
    for (int i = 0; i < 6; i++)
    {
        sum = arr1[i] + arr2[i];
        printf("%d\t", sum);
    }

    return 0;
}