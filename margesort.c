#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int data[10];
int size = 10;

// Función para implementar MergeSort
void mergeSort(int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Ordenar la primera y segunda mitad
        mergeSort(left, mid);
        mergeSort(mid + 1, right);

        // Fusionar las dos mitades
        merge(left, mid, right);
    }
}

// Función para fusionar dos sub-arreglos
void merge(int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Crear arreglos temporales
    int L[n1], R[n2];

    // Copiar datos a los arreglos temporales
    for (int i = 0; i < n1; i++) {
        L[i] = data[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = data[mid + 1 + i];
    }

    // Fusionar los arreglos temporales de nuevo en data[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            data[k] = L[i];
            i++;
        } else {
            data[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si los hay
    while (i < n1) {
        data[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si los hay
    while (j < n2) {
        data[k] = R[j];
        j++;
        k++;
    }
}

// Función para imprimir el arreglo
void printArray() {
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

// Función para generar un arreglo de números aleatorios
void generateRandomArray() {
    srand(time(NULL)); // Semilla para generar números aleatorios
    for (int i = 0; i < size; i++) {
        data[i] = rand() % 100; // Generar números entre 0 y 99
    }
}

int main() {
    // Generar un arreglo aleatorio de números enteros
    generateRandomArray();

    // Mostrar el arreglo antes de ordenar
    printf("Arreglo antes de ordenar:\n");
    printArray();

    // Ordenar el arreglo usando MergeSort
    mergeSort(0, size - 1);

    // Mostrar el arreglo después de ordenar
    printf("Arreglo despues de ordenar con margesort:\n");
    printArray();

    return 0;
}
