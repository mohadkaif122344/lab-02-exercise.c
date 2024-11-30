/*
 1.	Write a program to calculate 
    simple and compound interest.
*/
#include <stdio.h>
#include <math.h> // For the pow() function

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    // Input principal, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display the results
    printf("\nSimple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}

