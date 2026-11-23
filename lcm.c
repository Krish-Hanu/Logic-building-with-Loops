#include <stdio.h>
int main()
{
    int a,b,c=1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    for (;c>0;c++)
    {
        if (c%a==0 && c%b==0)
        {
            break;
        }

        
    }
    printf("LCM is %d",c);
    return 0;
}