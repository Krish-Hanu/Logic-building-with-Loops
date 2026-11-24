#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\nSum of First %d Natural Numbers is: %d", n, sum);
    return 0;
}
