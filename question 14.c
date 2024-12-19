#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        printf("Error: Input must be a positive integer.\n");
        return -1; // Error case
    }
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;


    printf("Enter the position of the term in the Fibonacci series: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    if (result != -1) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, result);
    }

    return 0;
}
