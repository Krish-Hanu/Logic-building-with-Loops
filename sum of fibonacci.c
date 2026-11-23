#include <stdio.h>
int main()
{
    int n;
    int sum = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        sum = sum + c;
        a = b;
        b = c;
    }
    printf("\nSum of Fibonacci series upto %d terms: %d", n, sum);
    return 0;
}
