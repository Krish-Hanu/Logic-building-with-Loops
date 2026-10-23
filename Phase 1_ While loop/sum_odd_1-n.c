#include <stdio.h>
int main()
{
    int x;
    int sum = 3;
    int i = 5;
    printf("Enter a number:");
    scanf("%d", &x);
    while (i < x)
    {
        sum = sum + i;
        i += 2;
    }
    printf("Sum of odd number between 1 and %d is %d", x, sum);
    return 0;
}