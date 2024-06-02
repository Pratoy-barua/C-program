#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter:");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("This is a vowel");
    }
    else
    {
        printf("This is consonent");
    }
    return 0;
}
