/*
4.Write a program to illustrate the use 
  of unary prefix and postfix increment and 
   decrement operators.
*/
#include <stdio.h>

int main() {
    int x = 10;
    int y = 10;

    // Prefix increment
    printf("Prefix increment:\n");
    printf("Initial value of x: %d\n", x);
    printf("Value after ++x: %d\n", ++x);
    printf("Final value of x: %d\n", x);

    // Postfix increment
    printf("\nPostfix increment:\n");
    printf("Initial value of y: %d\n", y);
    printf("Value after y++: %d\n", y++);
    printf("Final value of y: %d\n", y);

    // Reset values for decrement demonstration
    x = 10;
    y = 10;

    // Prefix decrement
    printf("\nPrefix decrement:\n");
    printf("Initial value of x: %d\n", x);
    printf("Value after --x: %d\n", --x);
    printf("Final value of x: %d\n", x);

    // Postfix decrement
    printf("\nPostfix decrement:\n");
    printf("Initial value of y: %d\n", y);
    printf("Value after y--: %d\n", y--);
    printf("Final value of y: %d\n", y);

    return 0;
}
