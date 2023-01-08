#include <stdio.h>
 
int main() {
    int curupira, boitata, boto, mapinguari, iara;
    scanf("%d %d %d %d %d", &curupira, &boitata, &boto, &mapinguari, &iara);
    printf("%d\n", curupira*300 + boitata*1500 + boto*600 + mapinguari*1000 + iara*150 + 225);
    
    return 0;
}