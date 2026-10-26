#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int i = n - 1;
    int p = n;
    while (i >0)
    {
        p = i * p;
        i--;
    }
    printf("Factorial of %d is %d", n, p);
    return 0;
}
