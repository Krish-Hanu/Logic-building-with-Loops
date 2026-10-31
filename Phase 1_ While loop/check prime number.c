#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p=1, i = 2;

    while (i < n)
    {
        p = 1;
        if (n % i == 0)
        {
            p = 0;
            break;
        }

        i++;
    }
    if (p == 1)
    {
        printf("%d is prime number", n);
    }
    else
    {

        printf("%d is not prime number", n);
    }

    return 0;
}
