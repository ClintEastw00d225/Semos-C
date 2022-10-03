#include <stdio.h>
#include <stdlib.h>

int main()//Корисникот внесува стринг и внесува знак кој треба да се контролира. Во стрингот се пребарува знакот и се брои
          //колку пати ќе биде сретнат. На крај реузлтатот се прикажува на екран
{
    char niza[100];
    char znak;
    int brojac=0;
    int i=0;
    printf("Vnesete string do 100 karakteri\n");
    gets(niza);//vnesuvanje string od tastatura direktno so 1 enter kako scanf
    printf("Koj znak sakate da go kontrolirate\n");
    scanf("%c", &znak);
    while(niza[i] != '\0')
    {
        if (niza[i] == znak)
        {
            brojac++;
        }
        i++;
    }
    printf("Znakot %c najden e %d pati", znak, brojac);

    return 0;
}
