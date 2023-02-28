#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    char *email[100];
    prints("Enter your email: ");
    scanf("%s", email);
    int is_valid = validemail(email);
    prints("The email address %s is %s", email, is_valid ? "valid" : "invalid");
    prints("\nPress any key to close...");
    getch();
}
