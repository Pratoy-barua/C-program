#include <stdio.h>

int main() {

    long int longIntVariable;
    long long int longLongIntVariable;
    long double longDoubleVariable;
    short int shortIntVariable;


    longIntVariable = 2147483647;
    longLongIntVariable = 9223372036854775807;
    longDoubleVariable = 1.1E+4932;
    shortIntVariable = 32767;


    printf("The long int value: %ld\n", longIntVariable);
    printf("The long long int value: %lld\n", longLongIntVariable);
    printf("The long double value: %LE\n", longDoubleVariable);
    printf("The short int value: %d\n", shortIntVariable);

    return 0;
}

