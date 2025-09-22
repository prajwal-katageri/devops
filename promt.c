#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    // Calculate sum using a loop
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Display result
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}