#include<stdio.h>
#include<string.h>

int main()
{
    char strname[100];
    printf("Enter a sentence:");
    gets(strname);
    puts(strname);
    int i=0, len=0;
    while(strname[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length: %d\n", len);
}
