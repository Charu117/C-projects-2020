#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 20
#define FALSE -1

void generateString(char str[], int dim);
void fillList(char str[][MAX], int riga);
void bubbleSort(char str[][MAX], int riga);
int ricercaBinaria(char str[][MAX], int row, char str_to_find[]);
void stampa(char str[][MAX], int riga);