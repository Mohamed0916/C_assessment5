#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c=0,d,e,s,s1,r,m,p1,p2,p3,t;
    printf("Enter any number:");
    scanf("%d",&a);
    r=a%10;
    d=a/10;
    b=d;
    e=d;
    while(d!=0){
        d=d/10;
        c++;
    }
    while(b>9){
        b=b/10;
    }
    p1=pow(10, (c-1));
    s=e-(b*p1);
    s1=s*10;
    p2=pow(10, c);
    m=r*p2;
    t=m+s1+b;
    printf("\nResult %d",t);
    return 0;
}
