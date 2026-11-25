#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
    {
        sum += i;
    }
    printf("Sum of all odd numbers from 1 to %d is: %d", n, sum);
    return 0;
}
