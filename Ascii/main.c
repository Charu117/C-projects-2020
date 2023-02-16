#include <stdio.h>

void ascii(); //Stampa tutta la tabella
void soloCaratteri();//Stampa solo i caratteri appartire da 33
void caratteriMaiuscoli(); //Stampa solo i caratteri letterali maiuscoli
void caratteriMinuscoli(); //Stampa solo i caratteri letterali minuscoli



int main()
{
    //char x = 65;
    //char y = 0.0;
    
    //printf("%c %d %c %d", x, x, y, y);
    
    //ascii();
    //soloCaratteri();
    //caratteriMinuscoli();
    caratteriMaiuscoli();

    return 0;
}
void ascii(){
    printf("\n");
    for (int i = 0; i < 128; i++){
        printf("\t %d\t %c\n", i, i);
    } 
}
void soloCaratteri(){
    printf("\n");
    for (int i = 33; i < 128; i++){
        printf("\t %d\t %c\t %x\n", i, i, i);
    }
    
}
void caratteriMaiuscoli(){
    printf("\n");
    for (int i = 65; i < 91; i++){
        printf("\t %d\t %c\n", i, i);
    } 
}
void caratteriMinuscoli(){
    printf("\n");
    for (int i = 97; i < 123; i++){
        printf("\t %d\t %c\n", i, i);
    } 
}












