#include <stdio.h>
int main()
{
    long long n;
    printf("Enter any number:");
    scanf("%lld", &n);
    printf("Total digit in %lld is", n);
    int sum = 0;
    while (n > 0)
    {

        sum += 1;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}