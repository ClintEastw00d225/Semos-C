#include <stdio.h>
#include <stdlib.h>

int main(){
    int user_name, pass;

    printf("Vnesi username:\n");
    scanf("%d", &user_name);
    printf("Vnesi password:\n");
    scanf("%d", &pass);

    if(user_name == 2425)
    {
        if(pass == 1122)
        {
            printf("Uspesno se logiravte\n");
        }
    else
        printf("Vnesovte gresen password\n");
    }
    else
        printf("Vnesovte gresen username\n");

    return 0;
}


//int main(){ //so logicki operatori (AND OPERATORI)
//
//    int user_name, pass;
//    printf("Vnesi username:\n");
//    scanf("%d", &user_name);
//    printf("Vnesi password:\n");
//    scanf("%d", &pass);
//
//    if((user_name == 2425) && (pass == 1122))
//    {
//        printf("Uspesno se logiravte\n");
//    }
//    else if((user_name != 2425) && (pass == 1122))
//    {
//        printf("Gresno Korisnicko ime\n");
//    }
//    else if ((user_name == 2425) && (pass != 1122))
//    {
//        printf("Gresen password\n");
//    }
//    else
//    {
//        printf("Gresno korisnicko ime i password");
//    }
//
//    return 0;
//}
