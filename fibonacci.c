#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    i = 0;
    do {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("%d ", nextTerm);
        i++;
    } while (i < n);
    return 0;
}