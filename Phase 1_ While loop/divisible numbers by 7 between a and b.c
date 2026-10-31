#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter last number: ");
    scanf("%d", &b);
    printf("Numbers between %d and %d divisible by 7 is ", a, b);
    int i;
    i = a + 1;
    while (a < i < b)
    {
        if (i % 7 == 0)
        {
            printf("%d", i);
        }
        i++;
    }
    return 0;
}