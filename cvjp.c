#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "cvjp.h"

// The function prints to the screen using strings format and supports template literals
void prints(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    char buffer[100];
    int i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            switch (format[i + 1])
            {
            case 'd':
                sprintf(buffer, "%d", va_arg(args, int));
                printf("%s", buffer);
                break;
            case 's':
                printf("%s", va_arg(args, char *));
                break;
            case 'a':
                int len = va_arg(args, int);
                int *arr = va_arg(args, int *);
                for (int j = 0; j < len; j++)
                {
                    sprintf(buffer, "%d ", arr[j]);
                    printf("%s", buffer);
                }
                break;
            case 'o':
                while (format[i + 2] != '%')
                {
                    char *key = va_arg(args, char *);
                    char *val = va_arg(args, char *);
                    sprintf(buffer, "%s: %s, ", key, val);
                    printf("%s", buffer);
                    i += 2;
                }
                char *key = va_arg(args, char *);
                char *val = va_arg(args, char *);
                sprintf(buffer, "%s: %s", key, val);
                printf("%s", buffer);
                break;
            default:
                printf("%c", format[i]);
                break;
            }
            i += 2;
        }
        else
        {
            printf("%c", format[i]);
            i++;
        }
    }
    va_end(args);
}
// Factorial function
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
// Function to permute two integers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Quick sort function for an array of integers
void quicksort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    // Segment the array into two parts: the part smaller than the pivot and the part larger than the pivot
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    // Call recursively to sort two segmented parts
    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}
// Function to sort array arr in ascending order
void sortup(int arr[], int length)
{
    // Declare temporary variable tempNum to store temporary value during element swap
    int tempNum;
    // Iterate over all elements of array arr
    for (int i = 0; i < length; i++)
    {
        // Iterate over all elements of array arr except the last element
        for (int j = 0; j < length - 1; j++)
        {
            // If the jth element is greater than the j+1th element, swap the positions of these two elements
            if (arr[j] > arr[j + 1])
            {
                tempNum = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempNum;
            }
        }
    }
}
// function that calculates the sum of elements in an array
int totalarray(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// function that inputs an array based on length
void arrayin(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
// function outputs an array based on length
void arrayout(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
// function to input a matrix by row, col
void matrixin(int matrix[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
// function outputs a matrix by row, col
void matrixout(int matrix[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
// function to find the index of an element in an array
int findindex(int arr[], int length, int num)
{
    for (int i = 0; i < length; i++)
        if (arr[i] == num)
            return i;
    return -1;
}
// find the largest and smallest number of an array, return the pointers min and max
void minmaxf(int arr[], int length, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        else if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
// function to check email is valid or not
int validemail(char email[])
{
    int at_index = -1, dot_index = -1, len = strlen(email);
    for (int i = 0; i < len; i++)
    {
        if (email[i] == '@')
        {
            if (at_index != -1)
            {
                return 0;
            }
            at_index = i;
        }
        else if (email[i] == '.')
        {
            if (at_index == -1 || i < at_index + 2 || i == len - 1)
            {
                return 0;
            }
            dot_index = i;
        }
        else if (!isalnum(email[i]) && email[i] != '_' && email[i] != '-')
        {
            return 0;
        }
    }
    if (at_index > 0 && dot_index > at_index)
    {
        return 1;
    }
    return 0;
}
// email input function if not valid, ask to re-enter
void getemail(char email[])
{
    while (1)
    {
        printf("Nhap email: ");
        fgets(email, 100, stdin);
        email[strcspn(email, "\n")] = '\0';
        if (validemail(email))
        {
            break;
        }
        printf("Email is invalid, enter again.\n");
    }
}
// password check function
int validpassword(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[])
{
    // Check length
    if (length > 0 && strlen(password) < length)
    {
        return 0;
    }
    // Check special characters
    if (special_char && strspn(password, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") == strlen(password))
    {
        return 0;
    }
    // Check for uppercase
    if (uppercase && strspn(password, "abcdefghijklmnopqrstuvwxyz0123456789!@#$%^&()_-+={}[]|\\:;\"'<>,.?/~") == strlen(password))
    {
        return 0;
    }
    // Check lowercase
    if (lowercase && strspn(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+={}[]|\\:;\"'<>,.?/~") == strlen(password))
    {
        return 0;
    }
    // Check number
    if (digit && strspn(password, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&()_-+={}[]|\\:;\"'<>,.?/~`") == strlen(password))
    {
        return 0;
    }
    // Check email match
    if (strlen(email) > 0 && strstr(password, email) != NULL)
    {
        return 0;
    }
    // Check for username match
    if (strlen(name) > 0 && strstr(password, name) != NULL)
    {
        return 0;
    }
    return 1;
}
// password input function, if it is not valid, it will ask you to re-enter it
void getpasswords(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[])
{
    while (1)
    {
        printf("Enter your password: ");
        fgets(password, 100, stdin);
        password[strcspn(password, "\n")] = '\0';
        if (validpassword(password, length, special_char, uppercase, lowercase, digit, email, name))
        {
            break;
        }
        printf("Password is invalid, please enter again.\n");
    }
}
// password input function with default parameters
void getpassword(char password[])
{
    getpasswords(password, 0, 0, 0, 0, 0, "", "");
}