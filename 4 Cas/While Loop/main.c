#include <stdio.h>
#include <stdlib.h>

int main()  //da se nabrojat broevite do dadena vrednost
{
    int max;
    int brojac=0;
    printf("Vnesi pozitivna vrednost\n");
    scanf("%d", &max);
    if(max>0)
    {
        while(brojac<=max)//<= znaci so se napisaniot broj
        {
            printf("%d\n", brojac);
            brojac ++;//so ova gi narojuvame broevite do nekoja vrednost
        }
    }
    else
    {
        printf("Vneseniot broj ne e pozitiven\n");
    }
    return 0;
}
