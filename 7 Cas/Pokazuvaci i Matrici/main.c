#include <stdio.h>
#include <stdlib.h>

/*Да се напише програма во која корисникот внесува димензии на матрица. После тоа внесува почетна вредност за парни редици и почетна
  вредност за непарни редици. Парните редици се пополнуваат: n+2*i*j
  Непарните редици се пополнуваат: m+j*i
  За пополнување се користи функција, која прима покажувач кон матрицата*/


void sortiraj(float *niza, int dolzina)//funkcija za sortiranje na niza vo opagjacki redosled preku pokazuvac kon niza definirana vo main
{                   //*niza - adresata od nizata
    int i=0;
    for(i=0;i<dolzina;i++)
    {
        for(int j=i+1;j<dolzina;j++)
        {
            //if(niza[i] < niza[j])
            if(*(niza+i) < *(niza+j))
            {
                float pomosna;
                //pomosna=niza[i]'
                pomosna=*(niza+i);
                //niza[j]=pomosna;
                *(niza+j)=pomosna;
            }
        }
    }
}

void izbrisi(char *niza, int dolzina, int pocetok, int n)
{
    int dolzina_kopija =dolzina-pocetok-n;//dolzina na vtoriot del od nizata (posle elementite sto treba da se isfrlat)
    char kopija_niza[dolzina_kopija];//niza vo koja privremeno ke gi zacuvame elementite koi ne treba da se brishat

    int j=0;//brojac za kopirana niza
    int i=0;//brojac za originalna niza

    for(int i=pocetok+n;i<dolzina;i++)
    {
        kopija_niza[j]=*(niza+i);
        j++;
    }
    for(i=pocetok;i<dolzina;i++)// vo ovoj for loop ke gi zemam vrednostite od niza_kopija i ke gi smestam vo originalnata niza tamu kade sto pocnav da brisam
    {
        *(niza+i)=0;
    }
    j+0;

    for(i=pocetok;i<pocetok+dolzina_kopija;i++)
    {
        *(niza+i)=kopija_niza[j];
        j++;
    }
    *(niza+i)='\0';//terminiranje na novosozdadenata niza, '\0' oznacuva null terminator i so ova zavrsuva nizata
}

 void kreiraj(int *matrica, int row, int col, int p, int np)
    {
        for(int i=0;i<row;i++)
        {
            if(i%2 == 0)//ako redicata e parna 0,2,4,6
            {
                for(int j=0;j<col;j++)//ke vrti spored brojacot na kolonite.
                {
                    *(matrica+i*col+j)=p+2*i*j;//matrica=pocetna/startna adresa - 1 element
                                               //i*col - kolku vkupno koloni ima vo matrici i broj na elementi vo kolona
                                               //j - pozicija na element vo momentalna matrica == matrica+i*col+j
                }

            }
            else
            {
                for(int j=0;j<col;j++)//ako redicata e neparna 1,3,5,7
                {
                    *(matrica+i*col+j)=np+i*j;//np+i*j e dadeno od zadacata isto i za toa pgoore so p+2*i*j
                }
            }
        }
    }

int main()
   {

   int r,c,p,np;// r- redici, c-koloni, p-parni, np-neparni
   printf("Vnesete broj na redici i koloni i startna vrednost za parni redici i neparni\n");
   scanf("%d%d%d%d",&r,&c,&p,&np);
   int mat[r][c];//mat - matrici
   kreiraj(&mat[0][0],r,c,p,np);//kreiraj - funkcija, &mat - pokazuvac kon adresata mat
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           printf("%d\t", mat[i][j]);
       }
       printf("\n");
   }


    return 0;
}

//compile - brojot so e 3ti e startnata vrednost za parnite, a 4tiot za neparnite

