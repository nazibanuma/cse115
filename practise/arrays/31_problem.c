#include <stdio.h>
// a program that prints the no. of odd & no. of even numbers in an array

int main()
{
    int elements[] = {1, 3, 4, 2, 5, 6};
    int index = 6, countodd = 0, counteven = 0;
    

    printf("\nodd numbers are: ");
    for (int i = 0; i < index; i++)
    {

        if (elements[i] % 2 != 0)
        {
            countodd++;
        }
    }
    printf("%d", countodd);
    printf("\neven numbers are: ");
    for (int i = 0; i < index; i++)
    {

        if (elements[i] % 2 == 0)
        {
            counteven++;
        }
    }
    printf("%d", counteven);

    return 0;
}