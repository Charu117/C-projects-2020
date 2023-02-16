#include <stdio.h>
#include <string.h>
#define dim 15

int compare(char f_str[], char s_str[]);

int main() {
    char firstStr[dim];
    char secondoStr[dim];
   
    printf("Inserire la prima stringa: ");
    scanf("%s", firstStr);
    printf("Inserire la secondo stringa: ");
    scanf("%s", secondoStr);

    if (compare(firstStr,secondoStr) == 2)
        printf("%s precede %s", firstStr, secondoStr);
    else if (compare(firstStr, secondoStr) == 1)
        printf("%s segue %s", firstStr, secondoStr);
    else if (compare(firstStr,secondoStr) == 0)
        printf("Le due stringhe inserite sono uguali");

    return 0;
}


int compare(char f_str[], char s_str[]){
    int var_tem;
    int result;
    char assi_var[dim];
    int i = 0;

    if (strlen(f_str) < strlen(s_str)){
        strcpy(assi_var, f_str);
        strcpy(f_str, s_str);
        strcpy(s_str, assi_var);
    }

    while (f_str[i] != '\0'){
        var_tem = f_str[i] - s_str[i];

        if (var_tem < 0){ // second one is greater that the other
            result = 2;
            break;
        } else if (var_tem > 0){
            result = 1;
            break;
        }
        else {
            result = 0;
            i++;
        }
    }

    return result;
}
