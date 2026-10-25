#include <stdio.h>

int main(void)
{
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%llu ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}