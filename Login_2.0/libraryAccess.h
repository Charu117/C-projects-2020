//
// Created by Warnakulasuriya Charu on 04/03/2021.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ARR 5
#define MAX_USER 10
#define MAX_STR 30
#define MAX_PASS 8

typedef struct {
    char username[MAX_USER];
    char password[MAX_PASS];
} user;
/*typedef struct {
    char name[MAX_STR];
    char surname[MAX_STR];
} details;*/
typedef struct {
    char name[MAX_STR];
    char surname[MAX_STR];
    user person;
} userDetails;

int checkUser(user _person);
void welcomeFunc(user _person);
void registration();
void service(user _person);
void name_and_surname_extract(user _person, char name[], char surname[]);
void create_file(char name[], char surname[]);
void read_files_or_edit_files();
void read_file(char filename[]);
void add_to_file(char filename[]);
