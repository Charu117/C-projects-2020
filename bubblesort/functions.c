#include "lib.h"

void fiilArray(int arr[], int dim){
    for (int i = 0; i < dim; ++i) {
        arr[i] = rand() % 20;
    }
}

void bubble_sort(int arr[], int dim){
    int temp;
    for (int i = 0; i < dim - 1; i++){
        for (int j = 0; j < dim - 1; j++) {
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}
void printArray(const int arr[], int dim){
    for (int i = 0; i < dim; ++i) {
        printf("%d ", arr[i]);
    }
}
