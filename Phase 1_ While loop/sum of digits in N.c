#include <stdio.h>
int main()
{
    int N, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    N = n;
    int i;
    int sum = 0;
    while (n > 0)
    {
        i = n % 10;
        n = n / 10;

        sum += i;
    }

    printf("Sum of all digits in %d is %d ", N, sum);
    return 0;
}