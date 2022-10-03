#include <stdio.h>
#include <stdlib.h>     //Дa се напише програма која ќе пресмета колку трицифрени броеви се делливи со 3.


float presmetaj_kvadrat(float broj);
void ispecati_broj(float c);
int zbir_cifri(int broj);

int main()
{
    int suma, brojac=0;
    for(int i=100; i<1000; i++)
    {
        suma=zbir_cifri(i);//pri povikuvanje na funkcijata zbir_cifri(i) ne se praka promenlivata i do funkcijata,
                           //tuku samo vrednosta sto taa ja ima. Ovie vrednosti se kopiraat vo promenlivi so iminja sto se zadadeni
                            //vo zaglavieto na funkcijata

        if(suma%3==0)//delivi so 3
        {
            brojac++;
            printf("%d\n", i);
        }
    }
    printf("%d tricifreni broevi se delivi so so 3\n", brojac);
    return 0;

}

int zbir_cifri(int broj)//zbir_cifri(i)
{
    int cifra,suma=0;
    while(broj != 0)
    {
        cifra=broj%10;
        suma+=cifra;
        broj/=10;
    }
    return suma;
}
