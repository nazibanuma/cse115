#include <stdio.h>
// C Program that prints the odd & the even numbers in an array separately

int main()
{
    int index;

    printf("write the index:");
    scanf("%d", &index);

    int arr[index];

    printf("Enter the elements: ");
    for (int i = 0; i < index; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nodd numbers are: ");
    for (int i = 0; i < index; i++)
    {

        if (arr[i] % 2 != 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\neven numbers are: ");
    for (int i = 0; i < index; i++)
    {

        if (arr[i] % 2 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}