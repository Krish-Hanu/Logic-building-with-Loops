#include <stdio.h>
#include <math.h>
int main()
{
    int n, N, m, sum = 0, sum2 = 0, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    m = n;
    N = n;
    do
    {
        i = n % 10;
        sum = sum + 1;
        n = n / 10;

    } while (n > 0);
    do
    {
        i = m % 10;
        sum2 = sum2 + round(pow(i, sum));
        m = m / 10;
    } while (m > 0);
    if (sum2 == N)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}