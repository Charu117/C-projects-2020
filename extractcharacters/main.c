#include "prototipi.h"

int main() {
    char word[20] = "Parola";
    char consonant[20];
    char vocals[20];

    extractCons(word, consonant);
    extractVocs(word,vocals);
    
    printf("La parola --> %s\n", word);
    printf("I consonanti --> %s\n", consonant);
    printf("I vocali sono --> %s", vocals);
    return 0;
}