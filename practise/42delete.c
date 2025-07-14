#include <stdio.h>

int main()
{
    int num = 21;
    int size = 6;
    int arr[6] = {10, 12, 91, 21, 60, 71};

    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
               
            }
        }
        size--;
    }

    for (int i = 0; i < size-1; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}