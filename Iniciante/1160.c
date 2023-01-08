#include <stdio.h>

int main() {
    int PopA, PopB, n, t, i;
    double GA, GB;

    scanf("%d", &t);
    int tempos[t];
    for (n = 0; n < t; n++)
    {
        scanf("%d %d %lf %lf", &PopA, &PopB, &GA, &GB);
        i = 0;
        GA = 1 + (double)GA/100;
        GB = 1 + (double)GB/100;
        while (i <= 100 && PopA <= PopB)
        {
            PopA = PopA * GA;
            PopB = PopB * GB;
            i++;
        }
        tempos[n] = i;
    }

    for (n = 0; n < t; n++)
    {
        if (tempos[n] > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", tempos[n]);
    }
    return 0;
}