#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter 0 for exit\n");
    do
    {
        printf("Enter number: ");
        scanf("%d",&n);

        count += 1;
        printf("Digit entered: %d\n", n);
    } while (n > 0);
    printf("Total number of digits entered: %d\n", count);

    return 0;
}