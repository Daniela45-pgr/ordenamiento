#include <stdio.h>
int main (){
    int arr[] = {3,5,7,2,8,1,9,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mayor = arr[0];
    int posicion = 0;



    for ( int i = 1; i < n; i++){
        if(arr[i] > mayor){
            mayor = arr[i];
            posicion = i;
        }
    }

    printf("El numero mayor del arreglo es: %d \n",mayor);
    printf("Esta en la posicion: %d", posicion + 1);

    return 0;
} 