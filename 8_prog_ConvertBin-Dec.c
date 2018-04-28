/*    Autor: Irving Efren Garcia Ramos     */
/*    E-mail: irvin.16@outlook.es          */
/*    Fecha de creación: 24/04/2018        */
/*    Fecha de actualización: 25/04/2018   */
/* Descripcion: Programa que convierta números
 de decimales a binarios y viceversa */

#include <stdio.h>
/*#include <stdlib.h>*/
/* #include <conio.h> no es una funcion estandar, solo funciona en windos*/
#include <math.h>

#define TAM 100
int main(void)
{
     int bitnum[TAM];
     int numDec;
     int numbin[TAM];
     char c;

     /* clrscr(); No es una función estandar, solo funciona para windows */
     printf("\nIngrese el numero binario: ");
     int cont=0;
     while((c=getchar())!='\n')
     {
         if (c== '1')
         numbin[cont]=1;
         if(c== '0')
         numbin[cont]=0;
         printf("%d", numbin[cont]);
         cont++;
     }
             int aux1=cont-1;
             int suma=0;
             for (int i=0; i<cont; i++)
             {
               if (numbin[aux1]==1) {


                 suma+=pow(2,i);
              }
              aux1--;
             }

       printf("\nEl numero es igual %d\n\n", suma);

// Conversión de decimal a binario
     printf("\nIngrese un número para convertir a binario");
     scanf("%d", &numDec);

     int aux=numDec;
     int i;
     for (i=0; aux>0; i++)
     {
           bitnum[i]= aux%2;
           aux/=2;
     }

     printf("\nEl numero %d es: ", numDec);
     for (int j=i-1; j>=0; j--)
     {
           printf("%d", bitnum[j]);
     }
     return 0;
}
