#include <stdio.h>
#include <stdlib.h>
#define g 9,81

    int m = 0; //da se koristi samo dokolku e cel broj
    //float m = 0.0; //masata na teloto vo kg dokolku masata e decimalen brok

    float F = 0.0;//silata na gravitacija

int main()  /*Да се пресмета сила на гравитација , за тело чија маса ја внесува корисникот од тастатура. Добиениот резултат да се
              прикаже на екран со прецизност од 4 децимали: “Za telo so masa 2 kg silata na gravitacija e: “ .
              Равенката за пресметување е F=m*g, каде што g е константа со вредност 9,81.*/
{
    printf("Presmetuvanje na sila na gravitacija:\n ");
    printf("Vnesi tezina na teloto:\n");
    scanf("%d", &m);
    scanf("%f", &m);

    F = m * g; //ravenka za presmetka na silata


    printf("Sila na gravitacija na telo so %d kg masa iznesuva F=%.4f\n", m, F);//printaj rezultat za cel broj
    printf("Sila na gravitacija na telo so %.4f.Kg masa iznesuva F=%.4f\n", m, F);//printaj rezultat




    return 0;
}
