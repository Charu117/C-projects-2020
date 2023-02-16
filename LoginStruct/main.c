#include "lib.h"

int main(int argc, char *argv[]) {
    char ans;
    User users;

    if (argc == 3){
        sscanf(argv[1],"%s", users.username);
        sscanf(argv[2], "%s", users.password);
        if (checkUser(users) == 1){
            welcomeFunction(users);
        } else{
            printf("User non trovato!\nVuoi registarti? (y/n) ");
        scanf("%c", &ans);
        if (ans == 'y' || ans == 'Y')
            addUser();
        else exit(0);
        }
    }else printf("Riprova...");

    return 0;
}
