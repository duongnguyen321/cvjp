#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int lengtharr = sizeof(arr) / sizeof(arr[0]);
    int sum = totalarray(arr, lengtharr);
    prints("The sum of the array elements is: %d", sum);
    prints("\nPress any key to close...");
    getch();
}