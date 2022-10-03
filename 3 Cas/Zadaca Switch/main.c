#include <stdio.h>
#include <stdlib.h>

int main()  //Zadaca so basic calculator
{
    int a = 0.0, b = 0.0, c = 0.0; //moze i so float
    int operacija = 0;

    printf("Vnesi go prviot broj:\n");
    scanf("%d", &a);//%f
    printf("Vnesi koja operacija sakas da bide izvrsena 0-sobiranje, 1-odzemanje, 2-mnozenje, 3-delenje\n");
    scanf("%d", &operacija);
    printf("Vnesi go vtoriot broj:\n");
    scanf("%d", &b);//%f

    switch(operacija)
    {
        case 0:
            c=a+b;
            break;
        case 1:
            c=a-b;
            break;
        case 2:
            c=a*b;
            break;
        case 3:
            c=a/b;
            break;
        default:
            printf("Nevalidna operacija");
    }
        printf("Rezultatot e %d", c);//%f



    return 0;
}
