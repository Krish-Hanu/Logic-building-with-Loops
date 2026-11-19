#include <stdio.h>
int main()
{
    int choice;
    printf("Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("You selected option %d\n", choice);

    } while (0 < choice && choice < 4);
    printf("Exiting the program.\n");

    return 0;
}