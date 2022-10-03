#include <stdio.h>
#include <stdlib.h>

int main() /*Da se napise programa koja za vnesen broj na poeni od ispit ke ja ispecati dobienata ocenka.
             Ako poenite se nadvor od opsegot 0 -100 da ispecati greska. 0-50(padnat ispit), 51-60(6ka), 61-70(7ca).. 91-100(10ka)*/
{
    int poeni;

    printf("Vnesi poeni:\n");
    scanf("%d", &poeni);

    if(poeni < 50)
    {
        printf("Ispitot e padnat");
    }
    else if(poeni <= 60)    //<= kazuva deka pocinje od 51, isto i za drugite <= , a ako e samo < od celiot broj
    {
        printf("Ocenka - 6ka");
    }
    else if(poeni <= 70)
    {
        printf("Ocenka - 7ka");
    }
    else if(poeni <= 80)
    {
        printf("Ocenka - 8ca");
    }
    else if(poeni <= 90)
    {
        printf("Ocenka - 9ka");
    }
    else if(poeni <= 100)
    {
        printf("Ocenka - 10ka");
    }
    else
    {
        printf("Vneseniot broj na poeni e pregolem");
    }



    return 0;
}
