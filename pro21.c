#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c = 0, d;
    printf("Enter any integer: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    d = a; 
    while (a > 0) {
        b = a % 10;
        if (b % 2 != 0) {
            c++;
        }   
        a = a / 10;
    }
    printf("The number of odd digits in %d is: %d\n", d, c);
    return 0;
}
