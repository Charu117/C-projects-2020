#include "lib.h"

void generateString(char str[], int dim){
    int i, size;

    size = rand() % dim;

    if (size != 0){
        for (i = 0; i < size; ++i)
            str[i] = rand() % 26 + 'A';

        str[i] = '\0';
    }
}
void fillList(char str[][MAX], int riga){
    char string[MAX];

    for (int i = 0; i < riga; ++i) {
        generateString(string, MAX);
        strcpy(str[i], string);

    }
}
void bubbleSort(char str[][MAX], int riga){
    char str_temp[MAX];

    for (int i = 0; i < riga - 1; ++i) {
        for (int j = 0; j < riga - 1; ++j) {
            if (strcmp(str[j], str[j+1]) > 0){
                strcpy(str_temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], str_temp);
            }
        }
    }
}
int ricercaBinaria(char str[][MAX], int row, char str_to_find[]){
    int position, endV, middle;

    position = 0;
    endV = row - 1;

    while (position <= endV){
        middle = (position + endV) / 2;
        if (strcmp(str[middle], str_to_find) < 0)
            position = middle + 1;
        else if (strcmp(str[middle], str_to_find) > 0)
            endV = middle - 1;
        else
            return middle;
    }
    return FALSE;
}
void stampa(char str[][MAX], int riga){
    for (int i = 0; i < riga; ++i) {
        printf("%s\n", str[i]);

    }
}

