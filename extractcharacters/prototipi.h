#include <stdio.h>
#include <string.h>
#define TRUE 1 // for consonants
#define FALSE 0 // for vocals

int verifyConAndVoc(char str);

void extractCons(char word[], char consFill[]);

void extractVocs(char word[], char vocsFill[]);