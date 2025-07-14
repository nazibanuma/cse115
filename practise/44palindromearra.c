#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[5] = {1, 2, 3, 2, 4};
    int palindrome = 1;

    for (int i = 0; i < SIZE / 2; i++)
    {
        if (arr[i] != arr[SIZE - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1)
    {
        printf("its palindrome");
    }
    else
    {
        printf("its not palindrome");
    }
    return 0;
}