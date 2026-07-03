#include <stdio.h>

int main() {
    int a,b,c=0;
    printf("Enter any no:");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b==4||b==5||b==6||b==7||b==8||b==9){
            c++;
        }
        a=a/10;
    }
    printf("\nTotal no of two digit perfect square no are %d",c);
    return 0;
}
