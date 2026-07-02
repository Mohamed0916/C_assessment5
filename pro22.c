#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c = 0,d;
    printf("Enter any integer: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    d = a; 
    a = abs(a);
    if (a == 0) {
        c = 1;
    }
    while (a > 0) {
        b = a % 10;
        if (b == 0 || b == 1 || b == 4 || b == 9) {
            c++;
        }   
        a = a / 10;
    }
    printf("Total single digit perfect squares in %d is: %d\n", d, c);
    return 0;
}
