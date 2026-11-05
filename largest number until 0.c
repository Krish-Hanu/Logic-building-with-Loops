#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    i = n;

    do
    {
        printf("Enter any number: ");
        scanf("%d", &n);

        if (n > i)
        {
            i = n;
        }
        if (n == 0)
        {
            break;
        }
    } while (n > 0);
    printf("Largest number enter by you is %d", i);
    return 0;
}