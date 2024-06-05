#include<stdio.h>
int main()
{
    char a[100];
    int size, i, num_of_vowels=0;
    printf("Enter the size of array:");
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        scanf("%c", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' )
        {
            num_of_vowels++;
        }
    }
    printf("Count: %d", num_of_vowels);
    return 0;
}
