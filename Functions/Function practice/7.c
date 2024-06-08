#include <stdio.h>
int sum_Func(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum in function: %d\n", sum);
    return sum;
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = sum_Func(arr, n);
    printf("Sum in main: %d\n", sum);
    return 0;
}
