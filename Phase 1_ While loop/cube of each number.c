#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cube of each digit in %d is ", n);
    int digit;

    while (n > 0)
    {
         digit = n % 10;

        printf("%d ", digit * digit*digit);
        n /= 10;
    }
    return 0;
}
