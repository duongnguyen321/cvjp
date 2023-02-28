// File cvjp.h
#ifndef CVJP_H
#define CVJP_H
// Declare the C functions you want to use in the library
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>

// The function prints to the screen using strings format and supports template literals
void prints(const char *format, ...);
// Factorial function
int factorial(int n);
// Function to permute two integers
void swap(int *a, int *b);
// Quick sort function for an array of integers
void quicksort(int arr[], int left, int right);
// Function to sort array arr in ascending order
void sortup(int arr[], int length);
// function that calculates the sum of elements in an array
int totalarray(int arr[], int length);
// function that inputs an array based on length
void arrayin(int arr[], int length);
// function that outputs an array based on length
void arrayout(int arr[], int length);
// function to input a matrix by row, col
void matrixin(int matrix[][100], int row, int col);
// function outputs a matrix by row, col
void matrixout(int matrix[][100], int row, int col);
// function to find the index of an element in an array
int findindex(int arr[], int length, int num);
// find the largest and smallest number of an array, return the pointers min and max
void minmaxf(int arr[], int length, int *min, int *max);
// function to check email is valid or not
int validemail(char email[]);
// email input function if not valid, ask to re-enter
void getemail(char email[]);
// password check function
int validpassword(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[]);
// password input function, if it is not valid, it will ask you to re-enter it
void getpasswords(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[]);
// password input function with default parameters
void getpassword(char password[]);
#endif // End of macro CVJP_LIFE