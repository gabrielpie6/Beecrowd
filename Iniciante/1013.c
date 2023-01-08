#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = (2*a + b + c + abs(b - c) + abs(2*a - b - c - abs(b - c)))/4;
    
    printf("%d eh o maior\n", maior);

    return 0;
}