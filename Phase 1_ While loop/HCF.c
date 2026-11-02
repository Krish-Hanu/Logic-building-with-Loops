#include <stdio.h>

int main() {
    int a = 60, b = 36;
    int num1 = a, num2 = b; // Keep copies of original numbers for display

    // Handle 0 cases immediately 
    if (a == 0) {
        printf("HCF of %d and %d is %d\n", num1, num2, b);
        return 0;
    }
    if (b == 0) {
        printf("HCF of %d and %d is %d\n", num1, num2, a);
        return 0;
    }

    // Do-while loop execution
    do {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    } while (a != b);

    printf("HCF of %d and %d is %d\n", num1, num2, a);

    return 0;
}