#include<stdio.h>

int main()
{
    int result;
    result = sum();
    printf("\nSum in main: %d", result);


}

int sum()
{
    int n, num, sum=0;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("Enter the %d value:", i);
        scanf("%d", &num);
        sum= sum+num;
    }
    printf("Sum in function: %d", sum);
    return sum;
}
