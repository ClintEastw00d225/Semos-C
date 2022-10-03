#include <stdio.h>
#include <stdlib.h>

int main()//Корисникот внесува стринг. Треба да се прикаже колку букви и колку цифри се пронајдени во стрингот
{
    int brojac_bukvi=0,brojac_broevi=0,i=0;
    char niza[100];
    printf("Vnesete string ne podolg od 100 karakteri\n");
    gets(niza);
    while(niza[i]!='0')
    {
        if(isalpha(niza[i]))//golema ili mala bukva
        {
            brojac_bukvi++;
        }
        else if(isdigit(niza[i]))//cifra od 0 do 9
        {
            brojac_broevi++;
        }
        i++;
    }
    printf("Za vnesen string %s Bea najdeni %d bukvi i %d broevi", niza, brojac_bukvi, brojac_broevi);


    return 0;
}
