#include <stdio.h>
 
int main() {
    int comprimento, metros;
    scanf("%d %d", &comprimento, &metros);
    printf("%d\n", comprimento - ((comprimento/metros)*metros));
    return 0;
}