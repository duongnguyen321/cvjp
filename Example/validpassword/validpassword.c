#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    /*
    The validpassword function takes in the following parameters:
    char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[]
    */
    // int is_valid = validpassword(password, 0, 0, 0, 0, 0, "", ""); // Let's pass all the default parameters as password, 0, 0, 0, 0, "", ""
    char password[100];
    char email[100], name[30];
    printf("Enter name: \n");
    scanf("%s", name);
    printf("Enter email: \n");
    getemail(email);
    printf("Enter password: \n");
    scanf("%s", password);
    int is_valid = validpassword(password, 8, 2, 1, 3, 1, email, name);
    /*
    The first parameter is password.
    The second parameter is length, wanting at least 8 characters.
    The third parameter is special_char, which wants at least 2 special characters.
    The fourth parameter is uppercase, which wants at least 1 capital letter.
    The fifth parameter is lowercase, which wants at least 3 lowercase letters.
    The sixth parameter is digit, wanting at least 1 number.
    The seventh parameter is email, wanting the password to be not the same as the email
    The last parameter is name, so that the password is not the same as the name
    */
    prints("The password %s is %s", password, is_valid ? "valid" : "invalid");
    // Concho@&123456 is valid
    prints("\nPress any key to close...");
    getch();
}