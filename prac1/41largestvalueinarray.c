#include <stdio.h>

int main()
{
    int max;
    int index = 6;
    int arr[6] = {10, 21, 311, 42, 56, 311};

    max = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
   //printf("%d", max);

   for(int i=0;i<6;i++){
    if(arr[i]==max){
        printf("%d\t",i);
    }
   }


    return 0;
}