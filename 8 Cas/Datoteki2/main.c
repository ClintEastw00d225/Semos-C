#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Во датотека со име file.txt на Desktop да се пронајде редот во кој има најмногу согласки. Тој редот заедно со бројот на пронајдени согласки да се испечатат на екран.
//Редот максимално може да има 80 знаци.



int proveri_soglaska(char znak)//funckcija za proverka na nekoj znak dali e samoglaska ili soglaska
{
    switch (znak)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            return 0;//ako e samoglaska ke vrati 0
        default:
            return 1;//ako ne e samoglaska ke vrati 1

    }
}

int main()
{
    FILE *fp;
    fp=fopen("C:/Users/David/Desktop/file.txt", "r");//patekata i r-citanje, znaci ke se cita od patekata

    //proverka
    if(fp == NULL)
    {
        printf("Greska pri otvoranje na datotekata");
        return 1;
    }

    char red[80];//tekovniot red
    char red_max[80];///go izdeluvam redot so najnogu soglaski so max
    int brojac_soglaski;
    int max_soglaski;
    int i=0;//promenliva so ke go izmninuva redot

                            //!= e uslovot sto ke mi go prekine while loopot koa ke stigne do NULL
    while(fgets(red, 80, fp)!= NULL)//fgets - so red oznacuvam kade sakam stringot da mi bide zapisan(vo red), koj e maksimalniot broj na elementi ako ne naidam na nov red (80 elementi), i od koja datoteka sakas ovoj string da bide iscitan (fp)
    //while loopot treba da go vrtam sve dur imam redovi za iscituvanje, potocno se dodeka ne dobijam Null kako vrednost
    {
        brojac_soglaski=0;//resetiram brojac na soglaski za sekoj nov red
        for(i=0;i<strlen(red);i++)//sekoj nov red go izminuva karakter po karakter
        {
            if( isalpha(red[i]) && proveri_soglaska (red[i]))//ako najdam znak sto e bukva i ne e samoglaskoa togas/...
            {
                brojac_soglaski++;//zgolemuvam brojac na soglaski
            }
        if (brojac_soglaski > max_soglaski)//stom go izminam celiot red, ako brojacot na soglaski > max, proglasuvam nov red so max soglaski
        {
            max_soglaski = brojac_soglaski;
            strcpy(red_max, red);//prvo destinacija

        }

        }

    }
    printf("Maksimalen broj na najdeni soglaski e %d vo sledniot red: \n %s ", max_soglaski, red_max);


    return 0;
}
