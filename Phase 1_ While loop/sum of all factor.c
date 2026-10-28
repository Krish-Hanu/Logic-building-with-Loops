#include <stdio.h>
int main()
{
    int N, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    N = n;
    int i=1;
    int sum = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            sum += i;
            
        }
        i++;
    }
    printf("Sum of all factors of %d is %d", N, sum);
    return 0;
}
