#include <stdio.h>
#include <stdlib.h>

int main()
{

//    int a=5;
//    float rezultat=0.0;
//    rezultat=a/2.0;
//    printf("rezultat e: %f", rezultat);//2.50000

    int a=5, b=2, ostatok=0;
    float rezultat=0.0, rezultat2=0.0;
    rezultat=a/2.0;
    rezultat2=a/b;
    ostatok=a%b;//modul potocno ostatok oznacuva
    printf("Delam so 2.0 rezultat = %f\n", rezultat);
    printf("Delam a so b = %f\n", rezultat2);
    printf("Osatotok pri delenje so a i b e: = %d\n", ostatok);



    return 0;
}
