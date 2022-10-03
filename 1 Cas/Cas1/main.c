#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int x;
//    printf("Vnesi broj:\n");
//    scanf("%d",&x); //se vnesuva vrednost so scanf kako cin vo c++, potocno input
//    printf("Vrednosta na x e %d", x);//se koristi %d specifikatorot za da pecatenje na tipovi int. %d ke se zameni so vrednosta x

    int x=10;
    float b;
    b=3.5;
    printf("Vrednosta na x e: %d\nVrednosta na  b e: %.2f",x,b); //%d ja oznacuva vrednosta za x, a %f(float) ja oznacuva za b
                                                     //.2 oznacuva kolku decimali sakame da se isprintaat


//    float number1 = 13.5;
//    double number2 = 10.6;
//    int number3 = 5;
//
//    printf("number1 = %f\n", number1);
//    printf("number2 = %f\n", number2);
//    printf("number3 = %d", number3);
    return 0;
}
