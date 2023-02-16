#include "lib.h"

int checkUser(User user){
    FILE *fp;
    char string[SIZE];
    int i = 0;
    int result = 0;
    userDetails user1[MAX];

    fp = fopen("users.txt", "r");

    while (!feof(fp)){
        fgets(string,SIZE,fp);
        sscanf(string, "%s %s %s %s", user1[i].name, user1[i].surname, user1[i].userName, user1[i].pass);
        if ((strcmp(user.username, user1[i].userName) == 0) && (strcmp(user.password, user1[i].pass) == 0)) {
            result = 1;
            break;
        }
        else i++;

    }
    fclose(fp);
    return result;
}
void welcomeFunction(User user){
    FILE *fp;
    char string[SIZE];
    int i = 0;
    userDetails user1[MAX];
    fp = fopen("users.txt", "r");

    while (!feof(fp)){
        fgets(string,SIZE,fp);
        sscanf(string, "%s %s %s %s", user1[i].name, user1[i].surname, user1[i].userName, user1[i].pass);
        if ((strcmp(user.username, user1[i].userName) == 0) && (strcmp(user.password, user1[i].pass) == 0)) {
            printf("Benvenuto, %s %s", user1[i].name, user1[i].surname);
            break;
        }
        else i++;

    }
    fclose(fp);
}
int verifyUsername(char username[]){
    FILE *fp;
    char string[SIZE];
    int i = 0;
    int result = 0;
    userDetails user1[MAX];
    fp = fopen("users.txt", "r");
    while (!feof(fp)){
        fgets(string,SIZE,fp);
        sscanf(string, "%s %s %s %s", user1[i].name, user1[i].surname, user1[i].userName, user1[i].pass);
        if (strcmp(username, user1[i].userName) == 0){
            result = 1;
            break;
        }
        else i++;

    }
    return result;
}
void addUser(){
    FILE *fp;
    char confirmPass[PASS];
    int con;
    userDetails user;

    fp = fopen("users.txt", "a");

    printf("Inserire il nome: ");
    scanf("%s", user.name);

    printf("Inserire il cognome: ");
    scanf("%s",user.surname);
    
   do{
        printf("Sciegliere un username: ");
        scanf("%s", user.userName);
        if (verifyUsername(user.userName) == 0){
            con = 1;
        }else printf("Il username già esistente.... RIPROVA!\n");
    } while (con == 0);


    do {
        printf("Inserire la password: ");
        scanf("%s", user.pass);

        printf("Conferma la password: ");
        scanf("%s", confirmPass);
        if (strcmp(user.pass, confirmPass) == 0){
            con = 1;
        } else{
            printf("La password non corrisponde\nRIPROVA...\n\n");
            con = 0;
        }
    }while (con == 0);

    fprintf(fp, "\n%s %s %s %s", user.name, user.surname, user.userName, user.pass);
    
    printf("\nRegistrazione avvenuta con successo");

    fclose(fp);

}