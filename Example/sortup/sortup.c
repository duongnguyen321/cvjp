#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main(){
    int arr[5] = {4, 2, 7, 1, 3};
    int lengtharr = sizeof(arr) / sizeof(arr[0]);
    sortup(arr, lengtharr);
    prints("The sorted array is: %a", lengtharr, arr);
    prints("\nPress any key to close...");
    getch();
}