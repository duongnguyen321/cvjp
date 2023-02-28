#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    // factorial
    int n = 5;
    int result = factorial(n);
    prints("%d! = %d", n, result);
    prints("\nPress any key to close...");
    getch();
}