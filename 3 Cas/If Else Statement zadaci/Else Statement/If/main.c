#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kolicina, cena_parche = 50, cena_naplata = 0;

    printf("Vnesi broj na cokoladi:\n");
    scanf("%d",&kolicina);

    if(kolicina > 10)
    {
        cena_naplata = kolicina*cena_parche*0.9;
    }
    else
    {
        cena_naplata = kolicina*cena_parche;
    }
    printf("Imate kupeno %d cokoladi i cenata za naplata e %d denari", kolicina, cena_naplata);


    return 0;
}
