#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    generateFibonacci(terms);

    return 0;
}
