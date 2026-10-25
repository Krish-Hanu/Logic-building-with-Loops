#include <stdio.h>

int main(void)
{
    int n, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit < 0)
            digit = -digit;

        if (digit > largest)
            largest = digit;

        n = n / 10;
    }

    printf("Largest digit = %d", largest);

    return 0;
}