#include <stdio.h>

int main()
{
    int a, b, c, i, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;
    for (i = max; ; i++)
    {
        if (i % a == 0 && i % b == 0 && i % c == 0)
        {
            printf("LCM = %d", i);
            break;
        }
    }
    return 0;
}
