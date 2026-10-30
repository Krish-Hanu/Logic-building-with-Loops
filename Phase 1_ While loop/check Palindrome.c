#include <stdio.h>
int main()
{
    int n, rev = 0, i, N;
    printf("Enter any number: ");
    scanf("%d", &n);
    N = n;
    while (n > 0)
    {
        i = n % 10;
        rev = rev * 10 + i;
        n = n / 10;
    }
    printf("Reverse of %d is %d\n", N, rev);

    if (rev == N)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }

    return 0;
}