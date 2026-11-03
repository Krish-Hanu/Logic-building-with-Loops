#include <stdio.h>
int main()
{
    int n,m, rev = 0, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    m = n; // Store the original number
    do
    {
        i = n % 10;
        rev = rev * 10 + i;
        n = n / 10;

    } while (n > 0);
    if (rev == m)
    {
        printf("The number is a palindrome number.\n");
    }
    else
    {
        printf("The number is not a palindrome number.\n");
    }
    return 0;
}