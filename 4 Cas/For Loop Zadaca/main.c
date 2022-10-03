#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int brojac;
//    for(brojac=1;brojac<=10;brojac++)//<= kazuva deka i 10kata ke se broi, znaci 10 elementi, a < oznacuva deka ke ima 9(do 9 se broi)
//    {                                //0 oznacuva deka od 0 ke pocne da se broi, a 1 deka od 1 pocinje da se broi(startna vrednost)

//        printf("Ovaa poraka ke se ispecati 10 pati\n");
//    }




//int main()  //Да се напише програма која ќе ги испечати парните броеви од 2 до 25
//{
//    int brojac;
//    for(brojac=2;brojac<=25;brojac++)
//    {
//        printf("%d\n", brojac);
//    }
//    printf("Vrednosta na brojac e %d", brojac);



int main()     //Сите броеви деливи со 2 или со 3
{
    int brojac;
    for(brojac=2;brojac<=25;brojac++) //= i 25kata se broi
    {
        if(((brojac%2)==0) || ((brojac%3)==0)) //ako nema ostatok pri delenja so 2, brojot e paren
                         //&& ako se staat tuka ke i od else ako iskomentirame do dvete posledni zagradi, ke isprinta 4 broja koi se delivi so 2 i so 3
        {
            printf("Brojot %d e paren\n", brojac);
        }
        //vaka bez else samo so || ni gi dava site broevi so se delivi so 2 ili so 3

//        else
//        {
//            printf("Brojot %d e neparen\n", brojac);
//        }
    }


    return 0;
}
