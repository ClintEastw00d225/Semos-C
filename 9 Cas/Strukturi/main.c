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
    struct Rabotnik vraboten;//vraboten e nova promenliva
    printf("Vnesete ime na vraboteniot: \n");
    gets(vraboten.ime);//vo gets se stava so ke se zeme - vraboten e strukturata i poleto so ke go popolnuvam e ime
    printf("Vnesete prezime na vraboteniot: \n");
    gets(vraboten.prezime);
    printf("Vnesete pozicija na vraboteniot: \n");
    gets(vraboten.pozicija);
    printf("Vnesete staz na vraboteniot: \n");
    scanf("%d", &vraboten.staz);

    printf("Gi vnesovte slednite podatoci:\n");
    printf("Ime na vraboten: %s\n", vraboten.ime);
    printf("Prezime na vraboten: %s\n", vraboten.prezime);
    printf("Pozicija na vraboten: %s\n", vraboten.pozicija);
    printf("Staz na vraboten: %d\n", vraboten.staz);

    return 0;

}


