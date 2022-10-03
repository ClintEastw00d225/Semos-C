#include <stdio.h>
#include <stdlib.h>

int main()/*Да се најде обратниот број на број внесен од тастатура. Откако ќе се најде овој број, да се испечати на екран,
            заедно со внесениот број. 1234 -> 4321*/
{
    int broj=0, nov_broj=0;
    int cifra=0;
    int kopija_broj;

    printf("Vnesi broj\n");//vnesuvanje na broj na korisnik
    scanf("%d", &broj);
    kopija_broj=broj;//pravam kopija na originalniot vnesen broj
    while(kopija_broj!=0) //proverka dali site broevi se izminati
    {
        cifra=kopija_broj%10;   //zemanje na posledna cifra od broj preku ostatok od 10
        nov_broj=nov_broj*10+cifra; //kreiranje na nov broj i lepenje na nova cifra
        kopija_broj/=10;    //eliminacija na posledna cifra koja veke ja zalepiv na noviot broj

    }

    printf("Originalniot vnesen broj bese %d, a noviot broj e %d", broj, nov_broj);




    return 0;
}
