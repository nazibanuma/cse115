#include <stdio.h>

int main()
{
    int num;
    int index = 6;
    int arr[6] = {10, 21, 31, 42, 56, 67};

    printf("enter the element to search: ");
    scanf("%d", &num);

    for (int i = 0; i < 6; i++)
    {
        if (num == arr[i])
        {
            printf("%d", i);
            break;
        }
        else{
            continue;
        }
        
    }
    return 0;
}