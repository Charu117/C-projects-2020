//
// Created by Warnakulasuriya Charu on 04/03/2021.
//

#include "libraryAccess.h"

int checkUser(user _person){
    FILE *fp;
    //char string[MAX_STR];
    int i = 0;
    int result = 0;
    userDetails users[MAX_ARR];

    fp = fopen("users.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s %s %s %s", users[i].name, users[i].surname, users[i].person.username, users[i].person.password);
        if ((strcmp(_person.username, users[i].person.username) == 0) && (strcmp(_person.password, users[i].person.password) == 0)){
            result = 1;
        }
        i++;
    }

    fclose(fp);
    return result;
}
void welcomeFunc(user _person){
    FILE *fp;
    int i = 0;
    userDetails users[MAX_ARR];

    fp = fopen("users.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s %s %s %s", users[i].name, users[i].surname, users[i].person.username, users[i].person.password);
        if ((strcmp(_person.username, users[i].person.username) == 0) && (strcmp(_person.password, users[i].person.password) == 0)){
            printf("Benvenuto, %s %s", users[i].name, users[i].surname);
        }
        i++;
    }
    fclose(fp);
}
void registration(){
    FILE *fp;
    char confirmPass[MAX_PASS];
    int endCondition = 0;
    userDetails user;

    fp = fopen("users.txt", "a");

    printf("Inserire il nome: ");
    scanf("%s",user.name);

    printf("Inserire il cognnome: ");
    scanf("%s", user.surname);

    printf("Inserire un username: ");
    scanf("%s", user.person.username);

    do {
        printf("Inserire la password: ");
        scanf("%s",user.person.password);

        printf("Conferma la password: ");
        scanf("%s",confirmPass);

        if (strcmp(confirmPass, user.person.password) != 0){
            printf("La password non corrisponde\nRIPROVA\n");
            endCondition = 1;
        }
    } while (endCondition == 1);

    fprintf(fp, "\n%s %s %s %s", user.name, user.surname, user.person.username, user.person.username);

    printf("\nRegistrazione avvenuta con successo!\n");

    fclose(fp);

}
void service(user _person){
    int op;
    char name[MAX_STR];
    char surname[MAX_STR];

    name_and_surname_extract(_person,  name, surname);

    printf("\n\nSelect what you want to do: \n1. Create a file\n2. Write on an existing file\nWrite the number of your choice --> ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            //I have to call the function create File
            create_file(name, surname);
            break;
        case 2:
            //I have to call the function add to the file
            read_files_or_edit_files();
            //add_to_file();
            break;
        default:
            printf("The number of your choice is incorrect");
            break;
    }
}
void name_and_surname_extract(user _person, char name[], char surname[]){
    FILE *fp;
    int i = 0;
    userDetails person[MAX_ARR];


    fp = fopen("users.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s %s %s %s", person[i].name, person[i].surname, person[i].person.username, person[i].person.password);
        if ((strcmp(person[i].person.username, _person.username)) == 0 && (strcmp(person[i].person.password, _person.password) == 0)){
            strcpy(name, person[i].name);
            strcpy(surname, person[i].surname);
        }
    }
    fclose(fp);
}
void create_file(char name[], char surname[]){
    FILE *fp;
    FILE *fp2;
    char filename[FILENAME_MAX];
    char confirmation;

    printf("Write the name of your file that you want to create: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    fp2 = fopen("user_files_list.txt", "a");

    fprintf(fp, "#%s %s", name, surname);
    fprintf(fp2, "\n%s %s %s", filename, name, surname);

    do {

    printf("Your file has been created!\nDo you want to add something to your file? (y/n) ");
    scanf("%c", &confirmation);

        if (confirmation == 'Y' || confirmation == 'y'){
            add_to_file(filename);
        }
    } while (confirmation == 'Y' || confirmation == 'y');

    fclose(fp);
    fclose(fp2);
}
void read_files_or_edit_files(){
    int confirmation;
    char file_name[FILENAME_MAX];

    printf("\n\nMake your choice\n1. Read your file\n2. Add something to your file\nYour choice: ");
    scanf("%d", &confirmation);

    switch (confirmation) {
        case 1:
            printf("Write the name of your file: ");
            scanf("%s", file_name);
            read_file(file_name);
            break;
        case 2:
            printf("Write the name of your file: ");
            scanf("%s", file_name);
            add_to_file(file_name);
            break;
        default:
            printf("\n\nChoice non available");
            break;
    }

}
void read_file(char filename[]){
    FILE *fp;
    char string[MAX_STR];

    fp = fopen(filename, "r");

    while (!feof(fp)){
        fgets(string, MAX_STR, fp);
        printf("%s", string);
    }
    fclose(fp);
}
void add_to_file(char filename[]){
    FILE *fp;
    char str[MAX_STR];

    fp = fopen(filename, "a");

    printf("Write anything to want to add to your file..");
    fgets(str, MAX_STR, stdin);

    fputs(str, fp);

    fclose(fp);
}