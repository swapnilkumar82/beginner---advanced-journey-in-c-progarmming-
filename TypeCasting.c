#include <stdio.h>

int main() {
    int slices = 9;
    int eaters = 2;

    // Method 1: Using a double literal (2.0)
    double halfThePizza = slices / 2.0;
    printf("%f\n", halfThePizza);

    // Method 2: Using type casting (double) on a variable
    halfThePizza = slices / (double) eaters; 
    printf("%f\n", halfThePizza);

    return 0;
}

