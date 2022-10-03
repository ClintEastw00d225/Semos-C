#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int a=4;
//    printf("Originalnata vrednost na e %d\n", a); //4
//    a=a+1; //4+1=5
//    //a+=1; //vtor nacin
//    ++a; //inkrement so prefix
//    printf("Zgolemenata vrednost na a za +1 e %d\n", a); //6
//    a++; //inkrement so postfix
//    printf("Zgolemena vrednost na a za +1 e %d\n", a); //7
//    //a=a+3; //promenliva(operacija)=promenliva/broj
//   // a+=3;
//    //a-=b; - > a=a-b;
//    //a*=9 - > a=a*9


    int a=4, d=4;
    int b, c;

    a=a+1;//5
    b=a;//5
    c=d++;
    c=d;//5
    d=d+1;//6
    printf("a=%d b=%d c=%d d=%d\n", a,b,c,d);

    return 0;
}
