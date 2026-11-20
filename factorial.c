#include <stdio.h>
int main()
{
int n,mul=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    printf("Factorial of %d is %d\n", n, mul);
    return 0;
}

   