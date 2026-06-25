#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c=0,s,p;
    printf("Enter any number:");
    scanf("%d",&a);
    b=a;
    if(a%2 == 0){
        printf("Result: %d",a);
    }
    else if(a%2 == 1){
        while(a!=0){
            a=a/10;
            c++;
        }
        p=pow(10, (c-1));
        s=b-p;
        printf("Result: %d",s);
    }
    return 0;
}
