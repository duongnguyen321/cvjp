#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    int length, min_val, max_val;
    prints("Enter the length of array:\n");
    scanf("%d", &length);
    int arr[length];
    prints("Enter the array elements:\n");
    arrayin(arr, length);
    minmaxf(arr, length, &min_val, &max_val);
    prints("The minimum value in the array is: %d\n", min_val);
    prints("The maximum value in the array is: %d", max_val);
    prints("\nPress any key to close...");
    getch();
}