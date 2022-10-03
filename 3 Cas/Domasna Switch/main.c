#include <stdio.h>
#include <stdlib.h>

int main() //Корисникот внесува месец (0 – 12), а програмата печати колку денови има во тој месец.Да се реши со If/else и sо switch.
{
    int mesec;
    printf("Vnesete broj na mesec:\n");
    scanf("%d", &mesec);

    switch(mesec)
    {
    case 1:
        printf("Januari ima 31 den\n");
        break;
    case 2:
        printf("Fevruari ima 28 dena\n");
        break;
    case 3:
        printf("Mart ima 31 den\n");
        break;
    case 4:
        printf("April ima 30 dena\n");
        break;
    case 5:
        printf("Maj ima 31 den\n");
        break;
    case 6:
        printf("Juni ima 30 dena\n");
        break;
    case 7:
        printf("Juli ima 31 den\n");
        break;
    case 8:
        printf("Avgust ima 31 den\n");
        break;
    case 9:
        printf("Septemvri ima 30 dena\n");
        break;
    case 10:
        printf("Oktomvri ima 31 den\n");
        break;
    case 11:
        printf("Noemvri ima 30 dena\n");
        break;
    case 12:
        printf("Dekemvri ima 31 den\n");
        break;
    default:
        printf("Vnesete validen broj");
    }

    return 0;

}
