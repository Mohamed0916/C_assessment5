#include<stdio.h>

int main(){
    int a,c=0;
    printf("\nEnter any no:");
    scanf("%d",&a);
    if(a==0){
        c=1;
    }
    while(a!=0){
        a=a/10;
        c++;
    }
    printf("\nReuslt:%d",c);
    return 0;
}
