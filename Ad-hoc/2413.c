#include <stdio.h>
 
int main() {
    int terceiro, segundo, primeiro;
    
    scanf("%d", &terceiro);
    segundo = 2*terceiro;
    primeiro = 2* segundo;

    printf("%d\n", primeiro);
 
    return 0;
}