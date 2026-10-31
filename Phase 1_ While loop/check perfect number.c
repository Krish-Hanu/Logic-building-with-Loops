#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0, i = 1;

    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
        }

        i++;
    }
    if (sum == n)
    {
        printf("%d is perfect number", n);
    }
    else
    {
        printf("%d is not perfect number", n);
    }
    return 0;
}
