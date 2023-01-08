#include <stdio.h>
#define pi 3.14159
 
int main() {
    double a, b, c;
    double tri, cir, tra, quad, ret;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    tri = (double) (a * c)/2;
    cir = pi * (c * c);
    tra = (double) ((a + b) * c)/2;
    quad = b * b;
    ret = a * b;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}