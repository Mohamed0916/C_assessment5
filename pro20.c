#include <stdio.h>

int main()
{
    int count = 0;
    printf("Single digit prime numbers are: ");
    for (int i = 2; i <= 9; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal number of single digit prime numbers = %d", count);
    return 0;
}
