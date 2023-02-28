#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    char email[100];
    getemail(email);
    prints("Your email is: %s", email);
    prints("\nPress any key to close...");
    getch();
}
