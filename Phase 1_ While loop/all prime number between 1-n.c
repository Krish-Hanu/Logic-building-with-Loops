#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, pri;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("All prime number between 1 and %d is:\n", n);
    i = 2;
    while (i <= n)
    {
        pri = 1;
        j = 2;
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                pri = 0;
                break;
            }
            j++;
        }
        if (pri == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}