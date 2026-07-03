#include <stdio.h>

int main() {
    int i,a,b;
    for(i=1000;i<=9999;i++){
        a=i%7;
        b=i%9;
        if(a==0&&b==0){
            printf("\nResult: %d",i);
        }
    }
    
    return 0;
}
