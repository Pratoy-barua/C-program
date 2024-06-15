#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int i, vowel;
    printf("Enter a sentence:");
    gets(str);
    i=vowel=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        vowel++;
    }

    printf("%d", vowel);

}

