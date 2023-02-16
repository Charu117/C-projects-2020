#include "libraryAccess.h"


int main() {
    user person;
    int ris;

    printf("Log In\nUsername: ");
    scanf("%s", person.username);

    printf("Password: ");
    scanf("%s", person.password);

    if (checkUser(person) == 1){
        welcomeFunc(person);
        service(person);
    } else {
        printf("Utente non verificato\nControlla se le credenziale siano giuste\nSe non sei già registrato - inserire 1 altrimenti 0: ");
        scanf("%d", &ris);
        if (ris == 1){
            registration();
        } else exit(0);
    }


    return 0;
}
