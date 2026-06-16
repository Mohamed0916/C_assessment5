#include<stdio.h>

int main(){
    int a,count;
    printf("Odd no from 11to20:");
    for(a=0;a<=9;a++){
        count=(2*a+1);
        if(count>=11){
             if(count<20){
                 printf("\n%d",count);
             }
        }
    }
    return 0;
}
