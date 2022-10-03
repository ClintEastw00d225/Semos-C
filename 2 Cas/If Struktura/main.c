#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    float moja_visina = 0.0, visina_drugar=0.0;
    printf("Vnesi sopstvena visina:\n ");

    scanf("%f", &moja_visina);
    printf("Vnesi visina na drugar:\n");

    scanf("%f", &visina_drugar);

    if(moja_visina > visina_drugar)
    {
        printf("Jas sum povisok od mojot drugar:\n");
    }
    if(moja_visina < visina_drugar)
    {
        printf("Drugar mi e povisok od mene\n");
    }
    if(moja_visina == visina_drugar)
    {
        printf("Isto sme visoki\n");
    }
    return 0;
}
