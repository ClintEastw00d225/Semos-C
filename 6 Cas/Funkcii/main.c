#include <stdio.h>
#include <stdlib.h>

int zbir_cifri(int broj)   //Дa се напишат и повикаат од main две функции: presmetaj_kvadrat – за внесен број пресметува/враќа број² - вклучувајќи и децимални броеви
                        //ispecati_broj -  За било кој број печати порака Brojot e ___


{
    int cifra=0,suma=0;
    while (broj != 0)
    {
        cifra = broj % 10;
        suma += cifra;//suma = suma + cifra
        broj /= 10; //eliminacija na posledna cifra
    }
    return suma;
}

int main()
{
     float c=(5,2);
     int broj1=7,broj2=3;
     float d=(broj1,broj2);
     printf("Vrednosta na 5 podeleno so 2 e %f\n",c);
     printf("Rezultatot na %d deleno so %d e %f",broj1,broj2,d);
     float a,b;
     scanf("%f",&a);
     pecati_broj(a);
     b=(a);
     pecati_broj(b);
     printf("Kvadratot na brojot 2.5 e %f",(2.5));


    return 0;
}

void pecati_broj(float broj)
{
    printf("Brojot e %f\n", broj);
}

