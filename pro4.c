#include<stdio.h>

int main(){
    int a,count=0;
    for(a=6;a>0;a--){
        count=count+a;
    }
    printf("Sum of 6to1:%d",count);
    return 0;
}
