#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Rabotnik//tip na nova promenliva
    {
    char ime[20];
    char prezime [30];
    char pozicija[30];
    int staz;
    };
    struct Rabotnik vraboten[3];//vraboteni[3] e niza, nizite odma se spojuvaat so for i while loop
    //struct Rabotnik *pVraboten = &vraboten[0]; //pokazuvaci kon strukturi
    //pVraboten->ime;
    for(int i=0; i<3 ;i++)//pocnuvam od 0, odam do 3 i i se zgolemuva za 1
    {
        printf("Vnesete ime na vraboteniot %d: \n", i);//i = koj vraboten po red go popolnuvam plus deka e vo niza
        gets(vraboten[i].ime);//vraboten[i] za koj vraboten ja popolnuvam
        printf("Vnesete prezime na vraboteniot %d: \n", i);
        gets(vraboten[i].prezime);
        printf("Vnesete pozicija na vraboteniot %d: \n", i);
        gets(vraboten[i].pozicija);
        printf("Vnesete staz na vraboteniot %d: \n", i);
        scanf("%d", &vraboten[i].staz);
        fflush(stdin);// za da ne go zima enterot kako karakter
    }
    for(int i=0;i<3;i++)
    {
        printf("Gi vnesovte slednite podatoci za vraboten %d:\n", i);
        printf("Ime na vraboten: %s\n", vraboten[i].ime);
        printf("Prezime na vraboten: %s\n", vraboten[i].prezime);
        printf("Pozicija na vraboten: %s\n", vraboten[i].pozicija);
        printf("Staz na vraboten: %d\n", vraboten[i].staz);
    }
    return 0;

}
