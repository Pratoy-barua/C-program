#include <stdio.h>
#include <stdbool.h>

int main() {

    double dV;
    printf("Enter double value:");
    scanf("%lf", &dV);
    bool bV;
    printf("Enter bool value:");
    scanf("%s", &bV);

    printf("Double Variable: %lf\n", dV);
    printf("Boolean Variable: %s\n", bV);

    return 0;
}

