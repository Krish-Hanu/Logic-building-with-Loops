#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, i, N, m, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    N = n;
    m = n;
    while (n > 0)
    {
        n = n / 10;
        count += 1;
    }
    while (N > 0)
    {
        i = N % 10;
        N /= 10;
        sum += round(pow(i, count));
    }
    if (sum == m)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is not Armstrong");
    }

    return 0;
}