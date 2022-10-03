#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() /*Da se presmeta perimetar i plostina na krug cij dijametar go vnesuva koristnikot od tastatura. Dobienite resenija da
            se prikazat na ekran so preciznost od 2 decimali vo format - (Za vnese dijameter = 2),
            Perimetarot na krugot so dijametar 2 e 6.28. Plostina na krugot so dijametar 2 e 3.14. Za Pi=3.14 da se definira kako konstanta*/
{
    float dijametar = 0.0, radius=0.0, plostina = 0.0, perimetar = 0.0;
    printf("Vnesi vrednost na dijametar: ");
    scanf("%f", &dijametar);

    radius=dijametar/2.0;     //za vnesen dijametar = 2
    plostina=radius*radius*PI; //formula P=r2*PI
    perimetar=dijametar*PI;    //formula L=d*PI

    printf("Plostina za dijametar %f e %.2f \n",dijametar,plostina);
    printf("Perimetar za dijametar %f e %.2f",dijametar, perimetar);

   return 0;
}
