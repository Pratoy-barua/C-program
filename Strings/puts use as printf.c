#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter name:");
    gets(name); //work as scanf
    puts(name); //work as printf
    printf("%s", &name[2]);
    return 0;
}
