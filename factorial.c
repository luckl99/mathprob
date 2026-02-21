#include <stdio.h>

int factorial(int n) {
    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int fact = factorial(number);

    printf("Factorial of %d is %d\n", number, fact);

    return 0;
}
