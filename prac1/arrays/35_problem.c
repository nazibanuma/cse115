#include <stdio.h>
#define N 10
/*reverse 10 numbers*/

int main()
{
    int a[N];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe reverse order is: \t");
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}