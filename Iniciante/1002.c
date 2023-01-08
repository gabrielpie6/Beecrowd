#include <stdio.h>
#define pi 3.14159
 
int main() {
    double raio, area;
    scanf("%lf", &raio);
    area = (double) pi * (raio * raio);
    printf("A=%.4lf\n", area);

    return 0;
}