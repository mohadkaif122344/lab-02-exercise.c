/*
  2.Write a program to swap values 
    of two variables with and without 
    using third variable.
*/
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input the values of a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping using a third variable: a = %d, b = %d\n", a, b);

    // Swapping back to original without using a third variable
    a = a + b; // Step 1
    b = a - b; // Step 2
    a = a - b; // Step 3
    printf("\nAfter swapping without using a third variable: a = %d, b = %d\n", a, b);

    return 0;
}
