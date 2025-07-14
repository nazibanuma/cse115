#include <stdio.h>

int main()
{
    int num, index = 6;
    int arr[6] = {19, 26, 30, 41, 58, 67};

    printf("enter the index to delete: ");
    scanf("%d", &num);

    for (int i = num; i <= index - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    index--;

    printf("the new array after deleting: ");
    for (int i = 0; i <= index - 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}