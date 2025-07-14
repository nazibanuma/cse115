#include<stdio.h>

int main(){
        int i,j,fact=1,term=6;
        float sum=1;

        for(i=2;i<=term;i++){
            fact=1;
            for(j=1;j<=i;j++){
                fact =fact* j;}
                if(i%2==0){
                    sum=sum-(1.0/fact);
                }
                else{
                    sum=sum+(1.0/fact);
                }
            
        }
        printf("%f",sum);
    return 0;
}