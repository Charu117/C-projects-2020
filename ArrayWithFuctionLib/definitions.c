#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

void fillArray(char arr[], int size){
    srand(time(NULL));
    int i; 

    for (i = 0; i < size - 1; ++i) {
        if (rand() % 2)
            arr[i] = rand() % 26 + 'A';
        else arr[i] = rand() % 26 + 'a';
        
    }
    
    arr[i] = '\0';
}

float average(char arr[], int size){
    int averVal = 0;
    for (int i = 0; i < size; ++i) {
        averVal += arr[i];
    }

    return (float)averVal/size;
}

//
void fillArray2(float avg, char arr1[], char arr2[], int size){
    for (int i = 0; i < size; ++i){
        /*
        * pow(base, esponente); return DOUBLE
        * powf(base, esponente); return FLOAT
        * powl(base, esponente); return LONG DOUBLE
        *
        * *Libreria math.h
        * @param base di tipo DOUBLE, FLOAT o LONG DOUBLE
        * @param esponente di tipo DOUBLE, FLOAT o LONG DOUBLE
        * Scopo: calcola la potenza e restituisce un DOUBLE, FLOAT o LONG DOUBLE
        * Funzionamento: base * nEsp (BASE * BASE * ...)
        */
        arr2[i] = pow((avg - arr1[i]), 2);
        
    }
}

int findMax(const char arr[], int size){
    int maxVal = 0;

    for (int i = 0; i < size; ++i){
         (maxVal < arr[i]) && (maxVal = arr[i]);
    }
    return maxVal;
}

int findMin(const char arr[], int size){
    int minVal = arr[0];

    for (int i = 0; i < size; ++i){
        (minVal > arr[i]) && (minVal = arr[i]);
    }

    return minVal;
}
void printArrayInt(const char arr[], int size, char comment[]){
    printf("%s: ", comment);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}