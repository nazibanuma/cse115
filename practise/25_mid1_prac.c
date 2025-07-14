#include<stdio.h>

int main(){
        int i,j,rows=3,k=1;

        for(i=1;i<=rows;i++){
            for(j=1;j<=i;j++){
                printf("%d", k++);
            }
            printf("\n");
        }
    return 0;
}