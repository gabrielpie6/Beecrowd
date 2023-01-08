#include <stdio.h>
#include <math.h>

int main() {
    float S = 1;
    int i = 1;
    int j = 3;
    while (j <= 39)
    {
        S += (float) j/(pow(2, i));
        j += 2;
        i++;
    }
    printf("%.2f\n", S);

    return 0;
}