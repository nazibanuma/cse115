#include <stdio.h>

int main()
{
    int x, arr[8] = {1, 2, 3, 4, 5,6,7,8};
    int count = 0, sum = 0;

    printf("enter a integer: ");
    scanf("%d", &x);

    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            for (int k = j+1; k < 8; k++)
            {
            sum = arr[i] + arr[j] + arr[k];
            if (sum == x)
            {
                count++;
            }
        }
        }
    }
    printf("%d",count);

    return 0;
}