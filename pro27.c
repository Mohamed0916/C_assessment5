#include <stdio.h>

int main()
{
    int a, b, i, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        max = a;
    else
        max = b;
    for (i = max; ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("LCM = %d", i);
            break;
        }
    }
    return 0;
}
