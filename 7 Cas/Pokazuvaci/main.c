#include <stdio.h>
#include <stdlib.h>

int main()/*Да се напише програма во која корисникот внесува број. Да се креира покажувач кој ќе покажува кон тој број. Да се креира
            нова променлива и во неа да се копира вредноста што корисникот ја има внесено преку користење на покажувачот. После тоа
            да се замени вредноста на оригиналната променлива со 3, исто така преку покажувач*/
{
    int a;
    int *ptr_a=&a;//pokazuvac kon istata promenliva a
                  //& - adresata na a pokazuva kon a
    printf("Vnesi broj\n");
    scanf("%d", &a);
    int b;
    printf("Originalnata vrednost na a = %d\n",a);
    b=*ptr_a;//pokazuvac kon a
             //* e vrednosta na memoriskiot prostor kaj so pokazuva kon a
    printf("Vrednosta na b = %d\n",b);
    *ptr_a=3;//se menuva vrednosta na 3
    printf("Novata vrednost na a = %d\n", a);
    printf("Adresa na a :%p", ptr_a);//%p e pecatenje pokazuvac(pointer) dodeka ptr_a mora da se napise ako se inicijalizira %p
                                       //Adresata ke go dade brojot vo hexadecimalen sistem kadesto osnovata e 16*0-9


    return 0;
}
