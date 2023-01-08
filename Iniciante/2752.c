#include <stdio.h>

int main()
{
    char text[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", text);
    printf("<%30s>\n", text);
    printf("<%.20s>\n", text);
    printf("<%-20s>\n", text);
    printf("<%-30s>\n", text);
    printf("<%.30s>\n", text);
    printf("<%30.20s>\n", text);
    printf("<%-30.20s>\n", text);

    return 0;
}