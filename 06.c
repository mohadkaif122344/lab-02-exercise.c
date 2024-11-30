/* 6.Write a program to find the largest of three 
numbers using ternary operators in c */

#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the largest number using nested ternary operators
    largest = (num1 > num2) 
                ? (num1 > num3 ? num1 : num3) 
                : (num2 > num3 ? num2 : num3);

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
