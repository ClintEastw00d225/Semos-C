#include <stdio.h>
#include <stdlib.h>

int main()
{
                    //0         1       2       3       4       5       6
    enum denovi{Ponedelnik, Vtornik, Sreda, Cetvrtok, Petok, Sabota, Nedela};
    enum denovi den;
    den=Cetvrtok;//kazuva po koj reden broj e
    printf("%d", den);

    return 0;
}
