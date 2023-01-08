#include <stdio.h>

int Horas_Segundos(int h, int min, int seg);
int Segundos_Horas(int seg, char fator);
int main() {
    int horaini, horafim, minini, minfim, hora, minuto, duracao;
    scanf("%d %d %d %d", &horaini, &minini, &horafim, &minfim);

    if (horaini > horafim || (horaini == horafim && minini >= minfim))
    {
        duracao = 24*3600 + (horafim*3600 + minfim*60) - (horaini*3600 + minini*60);
    } else
        duracao = Horas_Segundos(horafim, minfim, 0) - Horas_Segundos(horaini, minini, 0);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Segundos_Horas(duracao, 'h'), Segundos_Horas(duracao, 'm'));

    return 0;
}

int Horas_Segundos(int h, int min, int seg)
{
    int total = h*3600 + min*60 + seg;
    return total;
}

int Segundos_Horas(int seg, char fator)
{
    int h = seg / 3600;
    int min = seg / 60 - h*60;
    int s = seg - h*3600 - min*60;
    int tempo;

    if (fator == 'h')
        tempo = h;
    if (fator == 'm')
        tempo = min;
    if (fator == 's')
        tempo = s;
    return tempo;
}