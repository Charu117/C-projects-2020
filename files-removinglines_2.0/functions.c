#include "libraryFiles.h"

void write_file_from_input(int num){
    FILE *fp;
    char str[MAX];
    fp = fopen("file.txt", "a");

    for (int i = 0; i < num; ++i) {
        printf("\nInserisci una stringa: ");
        scanf("%s", str);
        fprintf(fp, "%s\n", str);
    }
    fclose(fp);
}
void newTempFile(){
    FILE *fp;
    FILE *fp2;
    int i = 0;
    char str[MAX];
    int number;

    read_file();

    fp = fopen("file.txt", "r");
    fp2 = fopen("newFile.txt", "w");

    printf("\nQuale riga delle stringhe vuoi cancellare? => ");
    scanf("%d", &number);

    number -= 1;
    while (!feof(fp)){
        fscanf(fp, "%s", str);
        ((i != number) && (!feof(fp))) && fprintf(fp2, "%s\n", str);
        i++;
    }
    fclose(fp);
    fclose(fp2);
    updatingFileWithTemp();
    read_file();
}
void read_file(){
    FILE *fp;
    char str_temp[MAX];

    fp = fopen("file.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s", str_temp);
        //(!feof(fp)) && printf("%s\n", str_temp);
    }
    fclose(fp);
}

void updatingFileWithTemp(){
    FILE *fp1;
    FILE *fp2;
    char str[MAX];
    fp1 = fopen("file.txt", "w");
    fp2 = fopen("newFile.txt", "r");

    while (!feof(fp2)){
        fscanf(fp2, "%s", str);
        (!feof(fp2)) && fprintf(fp1, "%s\n", str);
    }

    fclose(fp1);
    fclose(fp2);

}