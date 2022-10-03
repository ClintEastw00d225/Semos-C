#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

Formatiran vlez/izlez

int main()
{
    int ID;
    char ime[20];
    float plata;
    FILE *fp;
    fp = fopen("C:/Users/David/Desktop/nov_vraboten.txt","w");//w-pisuvam vo datoteka
    if(fp == NULL)
    {
        printf("Greska");
        return 1;
    }
    printf("Vnesete ID za noviot rabotnik\n");
    scanf("%d", &ID);
    fflush(stdin);//za da go ne zeme enterot kako karakter i se dodava posle vnesuvanjeto na brojot
    printf("Vnesete ime na noviot rabotnik\n");
    gets(ime);//koga zemam string namesto so scanf, so gets
    printf("Vnesete plata za noviot rabotnik\n");
    scanf("%f", &plata);
    fprintf(fp,"ID: %d\nIme: %s\nPlata: %f", ID, ime, plata);
   //vo koja datoteka sakam da zapisam, 2 argument - vnesuvanje na posakuvaniot string sto sakame da go zapiseme isto kako vo printf i 3tot e od kaj da sse ispecatat vrednostite
    fclose(fp);

    return 0;
}



