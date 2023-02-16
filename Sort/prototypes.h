#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void carica(int v[], int dim); // caricamento dell'array con i valori casuali
void stampa(int v[], int dim); // stampa un array
int average(const int arr[], int size); // Calcola e restituisce la media di un array
void newFillArray(int v[], int dim, float average); // caricamento dell'array
int ricercaBinaria(int v[], int dim, int num); // La ricerca binaria: Cerca un elemento presente nell'array
