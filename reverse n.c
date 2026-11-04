#include <stdio.h>
int main()
{
    int n, rev=0, digit;
    printf("Enter a number: ");
        scanf("%d", &n);
    do
    {
        digit = n % 10;
        rev = rev * 10 + digit;
    }
    while (n != 0);
    printf("Reverse of the number: %d\n", rev);
    return 0;
}