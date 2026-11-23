#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    for (c=a%b;c>0; a=b,b=c)
    {
        c=a%b;

        
    }
    printf("HCF is %d",a);
    return 0;
}