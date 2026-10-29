#include <stdio.h>
int main()
{
    int N, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    N = n;
    int i = 9;
    if (n == 0)
    {
        i = 0;
    }
    while (n > 0)
    {
        int r = n % 10;
        if (r < i)
        {
            i = r;
        }

        n = n / 10;
    }
    printf("Smallest digit in %d is %d", N, i);
    return 0;
}