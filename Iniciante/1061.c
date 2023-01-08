#include <stdio.h>

int Horas_Segundos (int h, int min, int seg);
int Segundos_Dias(int seg, char fator);
void Leitura (int V[]);

int main () {
    int ini[5], fim[5], duracao;
    int dias, horas, minutos, segundos;
    
    Leitura(ini);
    Leitura(fim);

    duracao = (fim[0]*86400 + Horas_Segundos(fim[1], fim[2], fim[3])) - (ini[0]*86400 + Horas_Segundos(ini[1], ini[2], ini[3]));

    dias = Segundos_Dias(duracao, 'd');
    horas = Segundos_Dias(duracao, 'h');
    minutos = Segundos_Dias(duracao, 'm');
    segundos = Segundos_Dias(duracao, 's');
    
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
    return 0;
}

void Leitura (int V[])
{
    scanf("%*s %d", &V[0]);
    scanf("%d : %d : %d", &V[1], &V[2], &V[3]);
}

int Horas_Segundos(int h, int min, int seg)
{
    int total = h*3600 + min*60 + seg;
    return total;
}

int Segundos_Dias(int seg, char fator)
{
    int time  = seg;
    int dias = time/86400;
    time = time - dias * 86400;

    int h = time / 3600;
    time  = time - h * 3600;

    int min = time / 60;
    time = time - min * 60;

    int s = time;
    int tempo;

    if (fator == 'd')
        tempo = dias;
    if (fator == 'h')
        tempo = h;
    if (fator == 'm')
        tempo = min;
    if (fator == 's')
        tempo = s;
    return tempo;
}