#include <stdio.h>

//2756 Iniciante
int main() {
    int i;
    char abc[] = {'A', 'B', 'C', 'D', 'E'};
    for (i = 7; i >= 3; i--)
    {
        printf("%*s%c", i, " ", abc[7-i]);
        if (i != 7)
        {
            printf("%*s%c\n", 13 - 2*i, " ", abc[7-i]);
        }
        else
            printf("\n");
    }
    for (i = 3; i >= 0; i--)
    {
        printf("%*s%c", 7-i, " ", abc[i]);
        if (i != 0)
        {
            printf("%*s%c\n", 2*i - 1, " ", abc[i]);
        }
        else
            printf("\n");
    }
    return 0;
}