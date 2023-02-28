#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    int length;
    prints("Enter the length of array:\n");
    scanf("%d", &length);
    int arr[length];
    prints("Enter the array elements:\n");
    arrayin(arr, length);
    prints("The array elements are:");
    arrayout(arr, length);
    prints("\nPress any key to close...");
    getch();
}