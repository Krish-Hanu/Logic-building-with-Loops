#include <stdio.h>
int main()
{
    int n;

    printf("All number from 1 to 10:\n");
    do
    {
        n = 1;
        printf("%d\n", n);
        n++;
    } while (n <= 10);
    
    return 0;
}