#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipos de funciones
void quicksort(int arr[], int prim, int ult);
void swap(int arr[], int i, int j);
void imprimirArreglo(int arr[], int size);
void generateRandomArray(int arr[], int size);

// Implementación del algoritmo de QuickSort
void quicksort(int arr[], int prim, int ult) {
    if (prim < ult) {
        int lower = prim + 1, upper = ult;
        swap(arr, prim, (prim + ult) / 2);
        int bound = arr[prim];

        while (lower <= upper) {
            while (bound < arr[upper]) {
                upper--;
            }

            while (bound > arr[lower]) {
                lower++;
            }

            if (lower < upper) {
                swap(arr, lower++, upper--);
            } else {
                lower++;
            }
        }

        swap(arr, upper, prim);

        if (prim < upper - 1) {
            quicksort(arr, prim, upper - 1);
        }

        if (upper + 1 < ult) {
            quicksort(arr, upper + 1, ult);
        }
    }
}

// Función para intercambiar dos elementos en el arreglo
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Función para imprimir el arreglo
void imprimirArreglo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función para generar un arreglo de números aleatorios
void generateRandomArray(int arr[], int size) {
    srand(time(NULL)); // Semilla para generar números aleatorios
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Generar números entre 0 y 99
    }
}

int main() {
    int size = 10;
    int arr[size];

    // Generar un arreglo aleatorio de números enteros
    generateRandomArray(arr, size);

    // Mostrar el arreglo antes de ordenar
    printf("Arreglo antes de ordenar:\n");
    imprimirArreglo(arr, size);

    // Ordenar el arreglo usando QuickSort
    quicksort(arr, 0, size - 1);

    // Mostrar el arreglo después de ordenar
    printf("Arreglo despus de ordenar con quicksort:\n");
    imprimirArreglo(arr, size);

    return 0;
}

