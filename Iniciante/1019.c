#include <stdio.h>

void Segundos_Horas(int seg);
int main() {
    int tempo;
    scanf("%d", &tempo);
    Segundos_Horas(tempo);
    
    return 0;
}

void Segundos_Horas(int seg)
{
    int h = seg / 3600;
    int min = seg / 60 - h*60;
    int s = seg - h*3600 - min*60;

    printf("%d:%d:%d\n", h, min, s);
}