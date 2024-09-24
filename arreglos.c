#include <stdio.h>

int main (){
    int numeros[5]={11,32,23,84,15};
    int calificaciones [5];
    int suma=0;
    float promedio=0;
    //printf("%d", numeros[3]);
   /* printf("Valor inicial en la posicion 4: %d", numeros[3]);
    printf("\n");
    numeros[3]=55;
    printf("Valor cambiado en la posicion 4: %d", numeros[3]);*/

int tamanio = sizeof(calificaciones) / sizeof(calificaciones[0]);
printf ("Tamaño del arreglo: %d \n", tamanio);

    /*for(int i=4; i >= 0; i--){
        printf("Valor en la posicion [%d]: %d \n", i,  numeros[i]);
    }*/

   for (int i=0; i<5; i++){
    printf("Calificacion %d: ", i+1);
    scanf("%d", &calificaciones[i]);
   }

   printf("\nMostrar calificaciones \n");

   for (int i=0; i<5; i++){
    printf("Calificacion %d: %d \n", i+1, calificaciones[i]);
    suma+=calificaciones[i];
   }
   promedio=suma/tamanio;

   printf("La suma es: %d \n", suma);
   printf("El promedio es: %f \n", promedio);

    return 0;
}