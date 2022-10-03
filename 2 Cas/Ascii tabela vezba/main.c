#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
//    char bukva;   //vo char promenliva dava 65 deka e A oznacuva vo ASCII tabelata
//    printf("Vnesi bukva:\n"); //bukva vo ASCII tabela
//    scanf("%c", &bukva);  //& oznacuva koj e kodot na bukvata i kaj pripaga vo ASCII tabelata
//    printf("Bukvata e: %c\n", bukva);
//    printf("Kodot na bukvata e: %d", bukva);  //preku %d go zimame brojot preku ASCII tabelata


    int kod=0;//koga ke vneseme broj do 255 ke ni go dade znakot daden za toj broj preku ASCII tabela
              //od 33 do 47 dava znaci i od 58 do 64
    printf("Vnesi broj:");
    scanf("%d", &kod);//preku %d dava broj ili kod
    printf("Bukvata e: %c\n", kod);
    printf("Kodot na bukvata e: %d", kod);


//    int x=14564645; // kje se isprinta % zosto toa e ostatokot pri delenje na 14564645/256
//    printf("%c",x);

    return 0;
}
