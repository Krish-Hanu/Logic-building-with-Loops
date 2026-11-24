#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("All numbers between %d and %d divisible by 7 are:\n", a, b);
    for (int i = a; i <= b; i++)
    {
        if (i % 7 == 0)
        {
        printf("%d\n",i);
        }
    }
    return 0;
}
