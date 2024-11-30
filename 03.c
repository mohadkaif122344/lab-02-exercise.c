/*
3.	Write a program to display 
    the size of every data type using “sizeof” operator.
*/
#include <stdio.h>

int main() {
    // Display the sizes of various data types
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of unsigned char: %lu byte\n", sizeof(unsigned char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of unsigned short: %lu bytes\n", sizeof(unsigned short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of unsigned long: %lu bytes\n", sizeof(unsigned long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of unsigned long long: %lu bytes\n", sizeof(unsigned long long));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    printf("Size of void*: %lu bytes\n", sizeof(void*)); // Size of a pointer (machine-dependent)

    return 0;
}