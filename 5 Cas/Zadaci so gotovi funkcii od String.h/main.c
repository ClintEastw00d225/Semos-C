#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteka za rabota so tekstualni nizi

int main()
{
    char niza1[]="AAA";
    char niza2[]="BBB";
    //strcpy(niza1,niza2);//go kopira stringot od niza2 vo niza 1
    //strncpy(niza1,niza2,1);//gi kopira prvite N karakteri od niza 2 vo niza 1, BAA i BBB
    //strcat(niza1,niza2);//spojuvanje niza1 so niza2 vo niza1
   //strncat(niza1,niza2,2);//spojuvanje na prvite dva karaktera vo od niza 2 vo niza 1
printf("%s \n",niza1);
printf("%s \n",niza2);
printf("Size of: %d Strlen: %d",sizeof(niza1), strlen(niza1));//size of - golemina so null terminator, a strlen pokazuva golemina bez null terminator
//
//     //String cmp 0-identicni nizi 1- niza1>niza2 -1 niza1<niza2
//     printf("%d",strcmp(niza1,niza2));

    return 0;
}
