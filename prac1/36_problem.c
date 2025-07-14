#include <stdio.h>

int main()
{
    int x, arr[5] = {1, 2, 3, 4, 5};
    int count = 0, sum = 0;

    printf("enter a integer: ");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == x)
            {
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}