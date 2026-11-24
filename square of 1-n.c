#include <stdio.h>
int main()
{
    int n;
    printf("Enter term: ");
    scanf("%d", &n);
    printf("The square of 1 to %d is:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}
