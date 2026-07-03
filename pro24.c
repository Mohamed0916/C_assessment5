#include <stdio.h>

int main() {
    int a,b,c=0,co=0,d;
    printf("Enter any no:");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        for(int i=2;i<=b;i++){
           d=b%i;
           if(d==0){
              c++;
           }
        }
        if(c==1){
           co++;
        }    
        a=a/10;
        c=0;
    }
    
    printf("\nTotal no of single digit prime no are %d",co);
    return 0;
}
