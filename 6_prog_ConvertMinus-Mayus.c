/*Autor: Irving Efren Garcia Ramos                    */
/*E-mail: irvin.16@outlook.es                         */
/*Fecha de creacion:19/04/2018                       */
/*Feha de modificacion: 20/04/2018                   */
/*Descripcion:Convertir de minuscula a mayuscula y de
y de mayuscula a miniscula */


/*Declaración de la biblioteca estandar*/
#include <stdio.h>

/*Definicion de constante*/
const int tam = 10;

/*Declaración de la función principal*/
int main(void)
{
   char c;
   char array[tam],arreglo[tam];
   int index = 0;
   // De minuscula a mayuscula
   printf("Ingrese en palabra en MINUSCULA: ");

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

   for (int i = 0; i < tam; i++)
   {
       printf("%c", array[i]);
   }
   printf("\n");
   // De mayusculas a minusculas
   index = 0;
  printf("Ingrese en palabra en MAYUSCULAS: ");

  while ((c = getchar()) != '\n')
  {
      if(c >=65 && c <=90)
      {
            c = c+32;
            arreglo[index] = c;
            index ++;
      }
   }
   printf("\n\n");

   for (int i = 0; i < tamanio; i++)
   {
       printf("%c", ar[i]);
   }
   printf("\n");

   return 0;
   }
