#include <stdio.h>

//1943 Ad-Hoc
int main() {
    int i = 0, num;
    int range[] = {1, 3, 5, 10, 25, 50, 100};
    scanf("%d", &num);

    while (num > range[i])
        i++;
    printf("Top %d\n", range[i]);
    
    return 0;
}