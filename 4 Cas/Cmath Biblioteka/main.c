#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //Biblioteka za matematicki funkcii


int main()
{
    float a, b, c;
    printf("Vnesi dva broja:\n");
    scanf("%f%f", &a,&b );
    c=sqrt(a+b);
    printf("Za vneseni boevi a=%.2f i b=%.2f zbirot e %f, a koren od zbirot e %.2f",a,b,a+b,sqrt(a+b));
    return 0;
}
