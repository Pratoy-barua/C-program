#include <stdio.h>

int main() {

    int X,Y;
    scanf("%d %d", &X, &Y);
    X += Y;
    printf("Incremented Value: %d\n", X);

    X -= Y;
    X -= Y;
    printf("Decremented Value: %d\n", X);

    return 0;
}

