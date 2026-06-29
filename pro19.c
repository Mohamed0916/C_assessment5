#include <stdio.h>

int main()
{
    int a, b, i, f;
    printf("Enter a 4-digit number: ");
    scanf("%d", &a);
    b = (a / 10) % 100;
    f = 1;
    if (b < 2)
        f = 0;
    else
    {
        for (i = 2; i < b; i++)
        {
            if (b % i == 0)
            {
                f = 0;
                break;
            }
        }
    }
    if (f)
        printf("%d is Prime", b);
    else
        printf("%d is Not Prime", b);
    return 0;
}
