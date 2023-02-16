#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

void menu(int sel){
    char str[10];
    char str2[10];
    char alpha[26];
    char vocals[5] = {'a', 'e', 'i', 'o', 'u'};
    const int DIM_ALPHA = 26;
    const int DIM = 10;

    switch (sel) {
        case 1:
            printf("\nInserisci una stringa: ");
            scanf("%s", str);
            convertStr(str, DIM);
            break;
        case 2:
            printf("\nInserisci una stringa: ");
            scanf("%s", str);
            printf("La lunghezza della stringa %s e' %d",str, strlength(str));
            break;
        case 3:
            printf("\nInserisci una stringa: ");
            scanf("%s", str);
            fillArr(alpha, DIM_ALPHA);
            countChar(alpha, str, DIM_ALPHA);
            break;
        case 4:
            printf("\nInserisci una stringa: ");
            scanf("%s", str);
            countChar(vocals, str, 5);
            break;
        case 5:
            printf("\nInserisci una stringa: ");
            scanf("%s", str);
            printf("\nLa stringa invertita e' ");
            strInvert(str);
            break;
        case 6:
            printf("\nInserisci una stringa: ");
            scanf("%s", str);
            printf("Inserisci una stringa: ");
            scanf("%s", str2);
            compareLen(str, str2);
            break;
        case 7:
            printf("\nInserisci un numero: ");
            scanf("%s", str);
            printf("\nIl numero %s in binario e' ", str);
            decToBin(str);
            break;
        default:
            printf("\nLa tua scelta non è valida....\nRIPROVA!\nRIPROVA!\nRIPROVA!");
    }
}

void fillArr(char alpha[], int dimAlpha){
    for (int i = 0; i < dimAlpha; ++i) {
        alpha[i] = i + 97;
    }
}

void convertStr(char str[], int size){
    int first = str[0];

    for (int i = 0; i < size; ++i){
        if ((str[i] >= 97 && str[i] <= 122) && first >= 97)
            str[i] -= 32;
        else if ((str[i] >= 65 && str[i] <= 90) && first <= 97)
            str[i] += 32;
    }
    printf("La stringa convertita --> %s", str);
}

int strlength(char str[]){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }

    return len;
}

void countChar(char structure[], char str[], int len){
    int charCount[26];
    int i, j;

    for(i = 0; i < len; i++){
        charCount[i] = 0;
    }

    for (j = 0; j < len; ++j) {
        for (i = 0; i < strlength(str); ++i) {
            structure[j] == str[i] && (charCount[j] += 1);
        }
    }
     printf("Ci sono:\n");
    for (i = 0; i < len; ++i) {
        charCount[i] != 0 && printf("%c --> %d\n", structure[i], charCount[i]);
    }
}
void compareLen(char str1[], char str2[]){
    if (strlength(str1) > strlength(str2))
        printf("%s e' più lunga di %s\n", str1, str2);
    else if (strlength(str1) < strlength(str2))
        printf("%s e' più lunga di %s\n", str2, str1);
    else printf("La lunghezza delle due stringhe e' uguale\n");
}
void strInvert(char str[]){
    for (int i = (strlength(str)-1); i >= 0; i--){
        (str[i] != '/0') && printf("%c", str[i]);
    }
}
void decToBin(char num[]){
    int number = atoi(num);
    char strBin[20];
    int i = 0;

    do {
        if (number % 2 == 1) strBin[i] = '1';
        else strBin[i] = '0';

        number /= 2;
        i++;
    } while (number > 0);
    strInvert(strBin);

}