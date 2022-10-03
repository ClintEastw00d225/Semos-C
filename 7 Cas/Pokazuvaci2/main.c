#include <stdio.h>
#include <stdlib.h>

int main()/*Да се напише програма во која ќе се иницијализираат три променливи од тип: char, short int и int. После тоа за секоја од
            нив да се креира и покажувач. Да се прикажат адресите на променливите преку покажувачите. После тоа секој покажувач да се
            инкрементира со ++. Да се прикажат новите вредности – адреси */

{
    char znak='a';
    short int broj1=100;
    int broj2=2000;
    char *ptr_znak=&znak;//promenliva znak pokazuva kon promenliva znak
    short int *ptr_broj1=&broj1;//promenliva broj1 pokazuva kon promenliva broj1
    int *ptr_broj2=&broj2;//promenliva broj2 pokazuva kon promenliva broj2
    printf("Char: %p Short int: %p Int: %p\n", ptr_znak, ptr_broj1, ptr_broj2);
    ptr_znak++;//inkrementacija
    ptr_broj1++;
    ptr_broj2++;
    printf("Char: %p Short int: %p Int: %p\n", ptr_znak, ptr_broj1, ptr_broj2);

    return 0;
}
