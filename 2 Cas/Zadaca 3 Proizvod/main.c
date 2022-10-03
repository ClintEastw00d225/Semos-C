#include <stdio.h>
#include <stdlib.h>

int main() /*da se presmeta Namalenata cena na proizvod, so vnesuvanje na negovata realna cena i golemina na popustot preku testatura
             i da se isprinta kolku bila orginalnata cena, kolku bil popustot i da se isprinta novata cena so preciznostz od 2 decimali*/
{
    float realna_cena = 0.0;
    float nova_cena = 0.0;
    int popust = 0.0;

    printf("Vnesi cena na proizvod vo denari:\n");
    scanf("%f", &realna_cena);

    printf("Vnesi popust na proizvodot na procenti:\n");
    scanf("%d", &popust);

    nova_cena = realna_cena - (realna_cena/100.0) * popust;

    printf("%d procenti popust od %.2f denari iznesuva %.2f denari\n", popust,realna_cena,nova_cena);
    return 0;
}
