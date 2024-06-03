//Write a program (WAP) that will reverse the digits of an input integer.
#include<stdio.h>
int main()
{
    int n,r=0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(; n>0; n=n/10)
    {
     r= r*10;
     r= r+ (n%10);
    }
    printf("The reversed number is: %d", r);
    return 0;
}
