#include <stdio.h>

int main() {
    int i,a,b,c=0,co=0;
    for(i=1;i<=100000;i++){
        a=i;
        while(a!=0){
            b=a%10;
            c=c+b;
            a=a/10;
        }
        if(c==14){
                printf("\nno:%d",i);
                co++;
            }
        c=0;
    }
    printf("\ntotal no of no:%d",co);
    return 0;
}
