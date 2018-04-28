/*Autor:Edgar Alejandro Hernandez Hernandez           */
/*E-mail:edgarh2014.94@gmail.com                      */
/*Fecha de creacion:19/04/2018                        */
/*Feha de modificacion:                               */
/*Descripcion:Convertir de minuscula a mayuscula y de
y de mayuscula a miniscula */


/*Declaración de la biblioteca estandar*/
#include <stdio.h>
#include <conio.h>

/*Definicion de constante*/
const int tamanio = 5;

/*Declaración de la función principal*/
int main(void)
{
   char c;
   char array[tamanio],ar[tamanio];
   int index = 0;
   // De minuscula a mayuscula
   printf("palabra en MINUSCULA: ");

   while ((c = getchar()) != '\n')
   {
       if(c >= 97 && c <= 122)
       {
            c = c-32;
           array[index] = c;
           index ++;
       }
   }
   printf("\n");

   for (int i = 0; i < tamanio; i++)
   {
       printf("%c", array[i]);
   }
   printf("\n");
   // De mayusculas a minusculas
   index = 0;
  printf("palabra en MAYUSCULAS: ");

  while ((c = getchar()) != '\n')
  {
      if(c >=65 && c <=90)
      {
            c = c+32;
            ar[index] = c;
            index ++;
      }
   }
   printf("\n\n");

   for (int i = 0; i < tamanio; i++)
   {
       printf("%c", ar[i]);
   }
   printf("\n");

   getch();
   return 0;
   }
