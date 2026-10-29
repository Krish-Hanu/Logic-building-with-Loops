#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Square of each number in %d is ", n);
    int i = 1;

    while (n > 0)
    {

        i = n % 10;

        printf("%d ", i * i);
        n = n / 10;
    }
    return 0;
}