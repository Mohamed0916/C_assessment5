#include<stdio.h>

int main(){
    int a,count,sum;
    printf("Odd no whose sum is 7:");
    for(a=0;a<=100;a++){
        count=(2*a+1);
        if(count>=11){
             if(count<100){
                 sum=((count/10)%10)+(count%10);
                 if(sum==7){
                     printf("\n%d",count);
                 }
             }
        }
    }
    return 0;
}
