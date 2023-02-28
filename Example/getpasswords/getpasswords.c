#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main(){
    char password[100], email[100] = "example@example.com", name[100] = "example";
    int length = 8, special_char = 1, uppercase = 1, lowercase = 1, digit = 1;
    getpasswords(password, length, special_char, uppercase, lowercase, digit, email, name);
    prints("Password: %s", password);
    prints("\nPress any key to close...");
    getch();
}