#include <stdio.h>
#include <math.h>
 
int main() {
 
    float a, b, c, delta, R1, R2;
    scanf("%f %f %f", &a, &b, &c);
    delta = sqrt((b*b) - 4*a*c);
    
    if (delta >= 0 && a != 0)
    {
        R1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
        R2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    } else
    {
        printf("Impossivel calcular\n");
    }
 
    return 0;
}