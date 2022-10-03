#include <stdio.h>
#include <stdlib.h>

int main()  /*Да се напише програма која за внесена голема буква од корисник ја менува во мала и ја печати на екран.
              Ако внесениот карактер не е голема буква да се прикаже порака за грешка*/
{
    char upperChar, lowerChar;
    int ascii;
    printf("Vnesete golema bukva: ");
    scanf("%c", &upperChar);
    ascii = upperChar;
    lowerChar = ascii+32;
    printf("Mala Bukva = %c\n", lowerChar);

    return 0;
}



//int main()
//{
//    char golema_bukva, mala_bukva;
//    // Primanje na vrednost za golema bukva
//    printf("Vnesi golema bukva\n");
//    scanf("%c", &golema_bukva);
//​
//    // Proverka dali se raboti za golema bukva
//    //if (karakter == 'N')
//    if ((golema_bukva >= 'A') && (golema_bukva<='Z'))
//    {
//        mala_bukva=golema_bukva+('a'-'A'); // Konverzija od golema vo mala preku mala=golema+(razlika mala golema)
//        printf("Za vnesena golema bukva %c se dobi mala bukva %c",golema_bukva,mala_bukva);
//​
//    }
//    else
//    {
//        printf("Vnesovte karakter %c shto ne e golema bukva!",golema_bukva);
//    }
//    return 0;
//}
