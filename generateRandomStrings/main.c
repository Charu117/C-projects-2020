//genarate casual strings

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int calculateCaps(char str[]);
int calculateSimps(char str[]);
int calculateNums(char str[]);

int main() {
    char e[15];
    int i;
    int bool;
    srand(time(NULL)); 
    
    for (i = 0; i < 15; i++) {
        bool = rand() % 3;
        if (bool == 1) {
            e[i] = (rand() % 10) + '0';
        } else if (bool == 2){
            e[i] = (rand() % 25) + 'A';
        } else {
            e[i] = (rand() % 25) + 'a';
        }
    }
    
    e[i] = '\0';
    printf("%s", e);
    
    printf("\nLa quantita' di maiuscole prensenti e' %d", calculateCaps(e));
    printf("\nLa quantita' di minuscole prensenti e' %d", calculateSimps(e));
    printf("\nLa quantita' di numeri prensenti e' %d", calculateNums(e));
   
    return 0;
}
int calculateCaps(char str[]){
    int countCaps = 0;
    for (int i = 0; i < 15; ++i){
        if (str[i] >= 65 && str[i] <= 90)
            countCaps++;
    }
    return countCaps;
}
int calculateSimps(char str[]){
    int countSimps = 0;
    for (int i = 0; i < 15; ++i){
        if (str[i] >= 97 && str[i] <= 122)
            countSimps++;
    }
    return countSimps;
}
int calculateNums(char str[]){
    int countNums = 0;
    for (int i = 0; i < 15; ++i){
        if (str[i] >= 48 && str[i] <= 57)
            countNums++;
    }
    return countNums;
}


















