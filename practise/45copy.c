#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[5] = {1, 2, 3, 2, 4};
    int arr2[5];
    int palindrome = 1;

    for (int i = 0; i < SIZE; i++)
    {
        arr2[SIZE - i - 1] = arr1[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}