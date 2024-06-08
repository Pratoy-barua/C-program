#include <stdio.h>
void print_value(char input)
{

    printf("Value received from main: %c\n", input);
}
int main()
{

    char input;
    scanf(" %c", &input);

    print_value(input);
    return 0;
}
