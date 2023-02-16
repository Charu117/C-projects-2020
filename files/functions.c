#include "lib.h"

void up_file(int dim){
    FILE *fp;
    char str1[MAX];

    fp = fopen("data.txt", "a");

    for (int i = 0; i < dim; ++i) {
        printf("\nInserisci una stringa: ");
        scanf("%s", str1);
        fprintf(fp, "%s\n", str1);
    }

    fclose(fp);

}
void removeLine(){
    FILE *fp;
    char str[20][MAX];
    char str_temp[MAX];
    int lineCount = 0;
    int number;

    fp = fopen("data.txt", "r+");

    while (!feof(fp)){
        fscanf(fp, "%s", str[lineCount]);
        (!feof(fp)) && printf("%s\n", str[lineCount]);
        lineCount++;
    }
    fclose(fp);
    writeFile(str, lineCount);



}
void writeFile(char str[][MAX], int lines){
    FILE *fp;
    int number;
    fp = fopen("data.txt", "w");

    printf("\nQuale riga vuoi cancellare?");
    scanf("%d", &number);
    
    number -= 1;

    for (int i = 0; i < lines; ++i) {
        if (i == number){
            fprintf(fp, "%s\n", str[i+1]);
        } else fprintf(fp, "%s\n", str[i]);
    }

    fclose(fp);
    read_file();
}
void read_file(){
    FILE *fp;
    char str_temp[MAX];

    fp = fopen("data.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s", str_temp);
        (!feof(fp)) && printf("%s\n", str_temp);
    }
    fclose(fp);
}