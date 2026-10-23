#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    int i = 1;
    while (i<=10)
    {
        printf("%d * %d = %d\n",x,i,i*x);
        i += 1;
    }
    return 0;
}