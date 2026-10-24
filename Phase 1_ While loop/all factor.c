#include <stdio.h>
// This program is to find the factors of a number
int main()
{
    int x;
    int n;
    int i = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("===== Factors of %d ======\n", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}