#include <stdio.h>

int main()
{
    int min;
    int index = 6;
    int arr[6] = {10, -21, 3, 42, 56, 3};

    min = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (min> arr[i])
        {
            min = arr[i];
        }
    }
   //printf("%d", max);

   for(int i=0;i<6;i++){
    if(arr[i]==min){
        printf("%d\t",i);
    }
   }


    return 0;
}