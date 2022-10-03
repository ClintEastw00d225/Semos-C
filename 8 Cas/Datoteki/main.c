#include <stdio.h>
#include <stdlib.h>
#include <string.h> //se dodavaat ovie biblioteki i tie odat standard so input output
#include <ctype.h>

/*Корисникот внесува низа од максимум 80 каркатери. Низата во обратен редослед за запишува во датотека со име primer1_file.txt.
Откако ќе биде запишана, фајлот повторно се отвора и се прикжува содржината на екран.
На крај датотеката се брише.*/


int main()
{
    FILE *fp;//pointer kon file
    fp = fopen("C:/Users/David/Desktop/primer1_file.txt", "w");//destinacijata na fajlot i w-to znaci deka ke se pisuva vo datotekata
                                                               //w - i da ne postoi datotekata, ke se kreira
                                                               //ako postoi ke se prebrise i ke ja otvori od novo, kako da ne postoela od novo

    char niza[80];
    printf("Vnesete niza:\n");
    gets(niza);//namesto scanf element po element da zimam, celosno ke se vnese
    //for(int i=0; i<dolzina ;i++)//od nulti element do dolzina -1. zatoa sto ne pravime dolzina so <=, tuku samo so pomalo< i zgolemuva so 1 element

    //ZAPIS VO DATOTEKA
    int i;
    //strlen - dolzina na niza bez null terminator      A(0) B(1) C(2) D(3) E(4) - koga pocnuvam od nazad
    for(i=strlen(niza)-1;i>=0;i--)//i=strlen(niza)-1 oznacuva deka koga pocnuvam od nazad, pocnuvam od vkupnata dolzina na nizata -1.Ako e 4ti element ke bide 5-1=4
    {                               //i>= ni kazuva deka zavrsuvame so 0 i toj nulti element ni e biten, znaci i 0 se broi
          fputc(niza[i], fp);       //i-- ni kazuva deka se namaluva za 1 i na ovoj nacin ke brojam namesto 0,1,2,3,4  4,3,2,1,0
         //fputc oznacuva da stavam 1 karakter vo datotekata i so (niza oznacuvam koj karatker, a so fp oznacuvam primer niza sto e dolga 5, ke pocne od 4 deka e -1.
         //fp -Eden po eden karatker ke gi zapisuva vo datotekata primer1.txt sto e linkuvano so fp

    }
    fclose(fp);
    //Citanje od datoteka
    fp = fopen("C:/Users/David/Desktop/primer1_file.txt", "r");//namesto pisuvanje, ke citame od datoteka

    for(int i=0;i<strlen(niza);i++)
    {
        printf("%c", fgetc(fp));//obratno ispecatenata niza ja dobiv na ekran i citanje na 1 znak od datoteka

    }
    fclose(fp);
    remove("C:/Users/David/Desktop/primer1_file.txt");// ke se izbrise datotekata i nema da ja ima veke na desktop

    return 0;
}
