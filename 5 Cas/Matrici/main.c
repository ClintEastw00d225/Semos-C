#include <stdio.h>
#include <stdlib.h>
#define MAX 100 //si obezbeduva memoriski prostor za 100 elementi. Bilo kolku moze da vneseme do 100

 int main()
{
     int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
     int m,n; // dimenzii vneseni od korisnik
     printf("Vnesete dimenzii m i n \n");
     scanf("%d%d",&m,&n);
     printf("Vnesi vrednosti za matrica A\n");  //MATRICA A
     for(int i=0; i<m; i++)                     //Prviot for ciklus sekogas ke bide za redici - matrici

     {   //Vtoriot gnezden for ke bide za koloni i ke se zgolemuva za 1
         for(int j=0; j<n;j++)          //ako piseme 3x4 se vmesuvaat 12 broevi i za A ke bide 3 redici i 4koloni
         {
             scanf("%d",&A[i][j]);
         }

     }
     printf("Vnesi vrednosti za matrica B\n");  //MATRICA B
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m;j++)
         {                              //ako piseme 3x4 se vnesuvaat 12 broevi i za B ke bide 4 redici i 3 koloni
             scanf("%d",&B[i][j]);
         }

     }
     // Mnozenje
     for (int i=0; i<m; i++)
     {
         for (int j=0; j<m; j++)
         {
             //C[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0]+....
             C[i][j]=0;
             for (int l=0; l<n; l++)
             {
                 C[i][j]+=A[i][l]*B[l][j];
             }
         }
     }
     for (int i=0; i<m; i++)
     {
         for (int j=0; j<m ;j++)
         {
             printf("%d\t",C[i][j]);
         }
         printf("\n");
     }
     return 0;
 }
