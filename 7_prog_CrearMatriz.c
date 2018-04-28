 /*      Autor: Irving Efren Garcia Ramos   */
 /*      E-mail: irvin.16@outtlook.es       */
 /*      Fecha de Creación: 21/04/2018      */
 /*      Fecha de Actualización: 22/04/2018 */
 /* Descripción: Programa que permita crear
 matrices (cuadradas, columna, rectangular) */


 // Declaración de las bibliotecas
 #include <stdio.h>
 #include <conio.h>

#define N 3
#define M 5
#define O 4


 // Declaración de la función principal
 int main(void)
 {
     int CUADRADA[N][N];
     int COLUMNA[N][N];
     int RECTANGULAR[N][M], i, j;

     // Matriz Cuadrada
     for (i=0; i<N; i++)
     {
         for (j=0; j<N; j++)
         {
             printf("Inserte valores a las posiciones[%d][%d]", i+1, j+1);
             scanf("%d", &CUADRADA[i][j]);
         }
     }

     for (i=0; i<N; i++)
     {
         for (j=0; j<N; j++)
         {
             printf("%d", CUADRADA[i][j]);
         }
     }

     printf("\n\n");

     // Matriz Columna
     for (i=0; i<N; i++)
     {
         for (j=0; j<N; j++)
         {
             printf("Inserte valores a las posiciones[%d][%d]", i+1, j+1);
             scanf("%d", &COLUMNA[i][j]);
         }
     }

     for (i=0; i<N; i++)
     {
         for (j=0; j<N; j++)
         {
             printf("%d\n", COLUMNA[i][j]);
         }
     }

     printf("\n\n");

    // Matriz Rectangular

     for (i=0; i<N; i++)
     {
         for (j=0; j<M; j++)
         {
             printf("Inserte valores a las posiciones[%d][%d]", i+1, j+1);
             scanf("%d", &RECTANGULAR[i][j]);
         }
     }

     for (i=0; i<N; i++)
     {
         for (j=0; j<M; j++)
         {
             printf("%d\t", RECTANGULAR[i][j]);
         }
     }
     getch();
     return 0;
 }
