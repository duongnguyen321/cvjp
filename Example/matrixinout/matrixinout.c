#include <stdio.h>
#include <conio.h>
#include "cvjp.h"

int main()
{
    int matrix[100][100], row, col;
    prints("Enter the row and col of matrix:\n");
    scanf("%d %d", &row, &col);
    prints("Enter the matrix elements:\n");
    matrixin(matrix, row, col);
    prints("The matrix elements are:\n");
    matrixout(matrix, row, col);
    prints("\nPress any key to close...");
    getch();
}