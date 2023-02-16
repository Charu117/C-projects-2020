#include "prototipi.h"

int verifyConAndVoc(char str){
    int result;

    if ((str == 'A') || (str == 'E') || (str == 'I') || (str == 'O') || (str == 'U'))
        result = FALSE;
    else if ((str == 'a') || (str == 'e') || (str == 'i') || (str == 'o') || (str == 'u'))
        result = FALSE;
    else result = TRUE;

    return result;

}

void extractCons(char word[], char consFill[]){
    int con = 0;
    for (int i = 0; i < strlen(word); i++){
        if (verifyConAndVoc(word[i]) == 1){
            consFill[con] = word[i];
            con++;
        }
    }
    consFill[con] = '\0';
    

}

void extractVocs(char word[], char vocsFill[]){
    int vocs = 0;
    for (int i = 0; i < strlen(word); i++){
        if (verifyConAndVoc(word[i]) == 0){
            vocsFill[vocs] = word[i];
            vocs++;
        }
    }
    vocsFill[vocs] = '\0';
    
}
