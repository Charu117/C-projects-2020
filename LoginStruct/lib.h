#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
#define MAX 20
#define PASS 10

typedef struct{
    char username[MAX];
    char password[PASS];
} User;

typedef struct{
    char name[MAX];
    char surname[MAX];
    char userName[MAX];
    char pass[MAX];
} userDetails;

int checkUser(User user); 
void welcomeFunction(User user);
int verifyUsername(char username[]);
void addUser();