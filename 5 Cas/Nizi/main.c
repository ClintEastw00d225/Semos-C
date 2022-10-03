#include <stdio.h>
#include <stdlib.h>

int main()  /*Напиши програма во која корисникот ќе може да внесе вредности за елементите на низа од тип float која има 10 елементи.
              Откако корисникот ќе ги внесе вредностите за секој елемент, да се испечатат на вредности сите елементи, еден под друг.*/

{
    float niza[10];

    int i=0;
    for(i=0;i<10;i++)
    {
        printf("Vnesete vrednost za sekoj element vo nizata so index %d\n", i);
        scanf("%f", &niza[i]);
    }
        printf("Vrednostite na site elementi bea uspesno vneseni\n");

    for(i=0;i<10;i++) //pokazuva indexot i vrednosta
    {
        printf("Index %d Vrednost %.2f\n", i, niza[i]);
    }



// int main()
//{
//     int niza[MAX]={}; // Deklaracija na niza + inicijalizacija na 0
//     int dolzina_niza=0; // Kje bide vnesena od korisnik

//     //Vnesuvanje dolzina na niza
//     printf("Vnesi broj na elementi sto kje gi ima nizata (do 100 maksimum) ");
//     scanf("%d",&dolzina_niza);
//     int i=0;

//     //Popolnuvanje na niza so elementi od korisnikot
//     for(i=0;i<dolzina_niza;i++)
//     {
//         printf("Vnesete element na pozicija %d\n",i);
//         scanf("%d",&niza[i]);
//     }
//     int j=0;
//     int pomosna=0; // pom, temp...
//     //Sortiranje
//     for(i=0;i<dolzina_niza;i++)
//     {
//         for(j=i+1;j<dolzina_niza;j++)
//         {
//             if (niza[i]>=niza[j])
//             {
//                 pomosna=niza[i];
//                 niza[i]=niza[j];
//                 niza[j]=pomosna;
//             }
//         }
//     }
//     for(i=0;i<dolzina_niza;i++)
//     {
//         printf("Index %d Vrednost %d\n",i,niza[i]);
//     }
//
//     return 0;
// }

    return 0;
}
