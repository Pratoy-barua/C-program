//Write a program (WAP) that will print the factorial (N!) of a given number N.
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("%d!= %d", n,fact);
    return 0;
}
