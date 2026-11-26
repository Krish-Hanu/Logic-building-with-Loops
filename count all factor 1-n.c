#include <stdio.h>
int main()
{
    int n, count;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        printf("Factors of %d are: ", i);
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                printf("%d ", j);
            }
           
        }
       printf("\n");
       printf("Total factor: %d", count);

        printf("\n");
    }

    return 0;
}