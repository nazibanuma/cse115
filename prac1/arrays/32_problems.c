#include <stdio.h>
// C Program to find the largest value in a float type array

int main()
{
    float arr[] = {12.6, 23, 45, 32, 67.9, 10.5}, max;
    int index = 6;

    max = arr[0];
    for (int i = 1; i < index; i++)// for(int i=0; i< index;i++)
    { 
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("the maximum value is %0.2f", max);

    return 0;
}