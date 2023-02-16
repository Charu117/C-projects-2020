#include "prototypes.h"

void carica(int v[], int dim){

    for(int i = 0;i < dim; i++)
        v[i] = rand() % 20;
}
void stampa(int v[], int dim){
    printf("\n");
    for(int i = 0 ; i < dim; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int average(const int arr[], int size){
    int averVal = 0;
    for (int i = 0; i < size; ++i) {
        averVal += arr[i];
    }
    return averVal/size;
}
void newFillArray(int v[], int dim, float average){
    for(int i = 0; i < dim; i++){
        v[i] = v[i] - average;
    }
}
int ricercaBinaria(int v[], int dim, int num){
    int position, endV, middle;

    position = 0;
    endV = dim - 1;

    while (position <= endV){
        middle = (position + endV) / 2;
        if (v[middle]< num)
                position = middle + 1;
        else if (v[middle] > num)
            endV = middle - 1;
        else
            return middle;
    }
    return -1;
}

