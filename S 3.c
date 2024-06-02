#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d", next);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci sequence up to %d terms:\n", n);
        printFibonacci(n);
    }

    return 0;
}
