#include<stdio.h>
#include<string.h>
int main()
{
    char strname[100];
    printf("Enter a sentence:");
    gets(strname);
    puts(strname);
    int len= strlen(strname);
    printf("%d", len);

}
