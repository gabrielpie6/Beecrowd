#include <stdio.h>
 
int main() {
    char *animal[][2][4] = 
    {
        {   
            //CARN, ONIV, HERB, HEMA
            {"", "homem", "vaca", ""},
            {"aguia", "pomba", "", ""}
        },
        {
            {"", "", "lagarta", "pulga"},
            {"", "minhoca", "", "sanguessuga"}
        }
    };
    char osso[20], tipo[20], dieta[20];
    scanf("%s", osso);
    scanf("%s", tipo);
    scanf("%s", dieta);

    int alpha = 0, beta = 0, gama = 0;
    if (osso[0] == 'i')
        alpha = 1;

    if (tipo[0] == 'a')
        beta = 1;

    if (dieta[3] == 'v')
        gama = 1;
    else
        if (dieta[3] == 'b')
            gama = 2;
        else
            if (dieta[3] == 'a')
                gama = 3;

    //printf("%d %d %d", alpha, beta, gama);
    printf("%s\n", animal[alpha][beta][gama]);
    return 0;
}