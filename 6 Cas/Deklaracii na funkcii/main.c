#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define MAX 100
​
// Globalni promenlivi - nadvor od bilo koja funkcija:
//  int rezultat_g; //_g oznacuva deka e globalna promenliva
//char niza_bukvi[MAX];
//char niza_broevi[MAX];
​
// Deklaracija na funkcii:
//void fnDisplay (char chrString []); // a function with string parameter with no return values
//int fnAddition (int intNum1, int intNum2); // a function with 2 integer arguments with integer output
//float fnAverage (int intNum []); // a function with argument as integer array with return value as float

//datatype function_name (arguments/parameters)
//{
//  declaration part;          /*Во рамките на телото на функцијата можеме да имаме декларација за локални променливи на функцијата,код
//                               за извршување на задачите и изјава за враќање за да ја вратиме вредноста на функцијата за повикување,
//                               проследена со затворена заграда*/
//  expressions/ statements;
//  return variable_name;
//}

void fnDisplay (char chrString []); // a function with string parameter with no return values

void main (){                                   /*ние ја прогласивме функцијата дури и пред да започне главната функција. Кога
                                                  компајлерот го составува кодот, ја гледа декларацијата и разбира дека има дефиниција за тоа.
                                                  Кога ја повикуваме функцијата во главната функција, таа го заменува повикот на
                                                  функцијата со дефинирање на функцијата и го извршува кодот.*/
  char chrStr [] = "Example of a Function";
  printf ("\nBefore calling the Function.....");
  fnDisplay (chrStr); // calling the function
  printf ("\nAfter calling the function.....");
}
// Function definition
void fnDisplay (char chrString []){
  printf ("\nInside the function Body......\n");
  printf ("%s", chrString);
  printf ("\nEnd of the function Body.....");
}

//// Funkcija za decimalno delenje na 2 celi broevi
//float podeli(int a, int b)
//{
//    float rezultat;
//    rezultat = (float)(a) / (float)(b);
//    return rezultat;
//    // return (float)(a)/(float)(b);
//}
//​
//// Funkcija za presmetka na kvadrat
//float presmetaj_kvadrat(float a)
//{
//    return a * a;
//}
​

//void pecati_broj(float broj);
//
//int zbir_broj(int broj);
//
//void razdeli(char niza[]);
//
//
//int main()
//{
//    char niza[100];
//    printf("Vnesete string sto ne e podolg od 100 karakteri\n");
//    gets(niza);
//    razdeli(niza);
//    printf("%s \n", niza_broevi);
//    printf("%s \n", niza_bukvi);
//
//    return 0;
//}
//
//float presmetaj_kvadrat(float a)
//{
//    return a * a;
//}
