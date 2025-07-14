#include <stdio.h>

int main()
{
    int i, j = 0, term = 3, sum = 0;

    for (i = 1; i <= term; i++)
    {

        j = j * 10 + 9;
        sum = sum + j;
    }
    printf("%d", sum);
    return 0;
}