/*
  8.Write a program to input name,
    marks of 5 subjects of a student and display
  the name of the student, the total marks scored, 
  percentage scored and the class of result.
*/
#include <stdio.h>

int main() {
    char name[50]; // Variable to store the student's name
    float marks[5], total = 0, percentage;
    int i;
    char class_result[20]; // Variable to store the class of result

    // Input the student's name
    printf("Enter the student's name: ");
    fgets(name, sizeof(name), stdin); // Use fgets for names with spaces

    // Input marks for 5 subjects
    printf("Enter the marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Add marks to total
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Determine the class of result
    if (percentage >= 75) {
        sprintf(class_result, "Distinction");
    } else if (percentage >= 60) {
        sprintf(class_result, "First Class");
    } else if (percentage >= 50) {
        sprintf(class_result, "Second Class");
    } else if (percentage >= 35) {
        sprintf(class_result, "Pass");
    } else {
        sprintf(class_result, "Fail");
    }

    // Display the result
    printf("\nStudent Name: %s", name);
    printf("Total Marks Scored: %.2f\n", total);
    printf("Percentage Scored: %.2f%%\n", percentage);
    printf("Class of Result: %s\n", class_result);

    return 0;
}
