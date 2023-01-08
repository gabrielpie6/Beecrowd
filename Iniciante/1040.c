#include <stdio.h>
 
int main() {
    float a, b, c, d, exame, media, mediaFinal;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    media = (float) (a*2 + b*3 + c*4 + d) / (2+3+4+1);

    printf("Media: %.1f\n", media);
    if (media >= 7)
        printf("Aluno aprovado.\n");
    else
        if (media < 5)
            printf("Aluno reprovado.\n");
        else
        {
            printf("Aluno em exame.\n");
            scanf("%f", &exame);
            printf("Nota do exame: %.1f\n", exame);
            mediaFinal = (float) (media + exame)/2;
            if (mediaFinal >= 5)
                printf("Aluno aprovado.\n");
            else
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }

    return 0;
}