#include <stdio.h>
#define pi 3.14159
 
int main() {
    double raio, volume;
    scanf("%lf", &raio);
    volume = pi * (4/3.0) * (raio*raio*raio);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}