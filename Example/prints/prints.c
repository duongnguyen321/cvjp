#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    // printf/prints
    int arr[5] = {1, 2, 3, 4, 5};
    // printf is can not use to render array and obj
    printf("This is an array: %a\n", 5, arr);                       // can not understand code
    printf("This is an object: %o\n", "name", "John", "age", "25"); // can not understand code
    // but prints is can use to render array and obj
    prints("This is an array: %a\n", 5, arr);
    prints("This is an object: %o\n", "name", "John", "age", "25");
    prints("\nPress any key to close...");
    getch();
}