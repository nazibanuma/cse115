#include <stdio.h>

int main()
{
    int num = 21;
    int index = 6;
    int arr[6] = {10, 12, 91, 21, 60, 21};

    for (int i = 0; i < index; i++)
    {
        if (num == arr[i])
        {
            for (int j = i; j < index - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            index--;
        }
        
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}