#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    int length, number;
    printf("Enter the length of array:\n");
    scanf("%d", &length);
    int arr[length];
    prints("Enter the array elements:\n");
    arrayin(arr, length);
    prints("Enter the number you want to find index:\n");
    scanf("%d", &number);
    int index = findindex(arr, length, number);
    prints("The index of %d in the array is: %d", number, index);
    prints("\nPress any key to close...");
    getch();
}