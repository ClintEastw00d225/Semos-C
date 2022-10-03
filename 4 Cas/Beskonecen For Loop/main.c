#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brojac = 0;
    float suma = 0.0, prosek = 0.0, broj = 0.0;
    char odluka;

    for(;;)
    {
         printf("Vnesi broj\n");
         scanf("%f", &broj);
         brojac ++;
         //suma=suma+broj;
         suma+=broj;
         printf("Dali sakate da vnesete uste eden broj?\n");
         fflush(stdin);
         scanf("%c", &odluka);

         if((odluka == 'n') || (odluka == 'N'))
         {
             break;
         }

    prosek=suma/brojac;
    printf("%d", brojac);

    }


    return 0;
}
