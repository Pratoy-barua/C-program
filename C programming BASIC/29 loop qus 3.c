//print the sum first n natural numbers also print them in revers
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter n:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        sum=sum+i; //sum +=i
    }
    printf("The sum is: %d\n", sum);

    for(int i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }
    return 0;


}

