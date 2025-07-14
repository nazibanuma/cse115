// C Program to read an array from user and an index and then delete the element in that index of array:

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int index = 7, num;

    scanf("%d",&num);
    printf("Enter the index to delete:%d", num);

    for (int i = num; i <= index; i++){
        arr[i] = arr[i+1];
        index--;
    }

        return 0;
}