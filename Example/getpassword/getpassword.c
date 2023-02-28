#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    char password[100];
    /*
     getpassword(password, 8, 1, 1, 1, 1)  
     Get a password with a minimum length of 8, with at least 1 special character, 1 uppercase letter, 1 lowercase letter, 1 digit
    */
    getpassword(password);
    printf("Your password is: %s\n", password);
    prints("\nPress any key to close...");
    getch();
}