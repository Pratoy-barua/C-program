#include <stdio.h>
int main()
{
    int uninitializedVariable;

    int initializedVariable= 42;

    int var1= 12, var2= 21, var3= 323;

    int sameValue1= 7, sameValue2 =7, sameValue3= 7;

    printf("a) Uninitialized Variable: %d\n", uninitializedVariable);
    printf("b) Initialized Variable: %d\n", initializedVariable);
    printf("c) Multiple Variables with Different Values: %d, %d, %d\n", var1, var2, var3);
    printf("d) Multiple Variables with Same Value: %d, %d, %d\n", sameValue1, sameValue2, sameValue3);

    return 0;
}
