#include<stdio.h>

int main(){
    int a,d,s,c=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    while(a>=9){
        d=a%10;
        a=a/10;
        c=c+d;
    }
    s=c+a;
    printf("result:%d",s);
    return 0;
}
