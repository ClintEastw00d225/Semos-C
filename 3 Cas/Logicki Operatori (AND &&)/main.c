#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Vnesi godiste:\n");
    scanf("%d", &age);

    if(age > 12)
    {
        if(age < 20)
        {
            printf("Teenager");
        }
        else
        {
            printf("Ne e teenager");
        }
    }
    else
    {
        printf("Ne e");
    }


//    if(age > 12 && age < 20)  //AND OPERATORI
//    {
//        printf("Teenager\n");
//    }
//    else
//    {
//        printf("Ne e teenager\n");
//    }
    return 0;
}
