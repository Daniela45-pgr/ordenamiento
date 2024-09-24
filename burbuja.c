#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDAD_NUMEROS 30

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
       for(int j = 0; j < n-i-1; j++){
          if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
       }
    }
}

void random (int arr[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        arr[i] = (rand() % 100) + 1; // Números aleatorios entre 1 y 100
    }
}

int main() {
    srand(time(NULL)); // Inicializar la semilla

    int arr[CANTIDAD_NUMEROS];
    random(arr, CANTIDAD_NUMEROS); // Generar 30 números aleatorios

    printf("Arreglo desordenado:\n");
    for (int i = 0; i < CANTIDAD_NUMEROS; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, CANTIDAD_NUMEROS); // Ordenar el arreglo

    printf("Arreglo ordenado:\n");
    for (int i = 0; i < CANTIDAD_NUMEROS; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}