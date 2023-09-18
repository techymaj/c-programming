#include <stdio.h>

int main() {
    int m, n;

    // Prompt the user for input
    printf("Enter the values for m and n (m > n): ");
    scanf("%d %d", &m, &n);

    if (m <= n) {
        printf("Invalid input. m must be greater than n.\n");
        return 1;
    }

    // Calculate the sides and hypotenuse
    int side1 = m * m - n * n;
    int side2 = 2 * m * n;
    int hypotenuse = m * m + n * n;

    // Display the Pythagorean triple
    printf("Pythagorean Triple: (%d, %d, %d)\n", side1, side2, hypotenuse);

    return 0;
}
