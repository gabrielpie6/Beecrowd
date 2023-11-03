#include <stdio.h>
#include <math.h>
#define n 100

int main() {
    int i;
    double N[n];

    scanf("%lf", &N[0]);
    for (i = 1; i < n; i++)
        N[i] = (double) N[0]/(pow(2, i));

    for (i = 0; i < n; i++)
        printf("N[%d] = %.5lf\n", i, N[i]);

    return 0;
}