#include<stdio.h>

int main(){
    int a,count,tend;
    printf("even no whose tens digit is 7:");
    for(a=0;a<=100;a++){
        count=(2*a+1);
        if(count>=11){
             if(count<100){
                 tend=(count/10)%10;
                 if(tend==7){
                     printf("\n%d",count);
                 }
             }
        }
    }
    return 0;
}
