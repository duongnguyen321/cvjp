CVJP Library Introduction

# CVJP Library Introduction

CVJP is a C library containing various functions for common programming tasks.

## Usage

To use the library, you can download the source code from [GitHub](https://github.com/duongnguyen321/cvjp).
After downloading, include the header file `cvjp.h` in your C code and link against the `cvjp` library.

### For example, to use the `prints` function, include `cvjp.h` and link against the `cvjp` library:

    #include "cvjp.h"
    ...
    // printf/prints
    int arr[5] = {1, 2, 3, 4, 5};
    // printf is can not use to render array and obj
    printf("This is an array: %a\n", 5, arr);                       // can not understand code
    printf("This is an object: %o\n", "name", "John", "age", "25"); // can not understand code
    // but prints is can use to render array and obj
    prints("This is an array: %a\n", 5, arr);
    prints("This is an object: %o\n", "name", "John", "age", "25");

To see an example usage of the `prints` function, check out the source code file [prints.c](./Example/prints/prints.c).

### For example, to use the `factorial` function:

    #include "cvjp.h"
    ...
    int n = 5;
    int result = factorial(n);
    prints("%d! = %d", n, result);

To see an example usage of the `factorial` function, check out the source code file [factorial.c](./Examplefactorial/factorial.c).

### For example, to use the `quicksort` function:

    #include "cvjp.h"
    ...
    int arr[5] = {4, 2, 7, 1, 3};
    int lengtharr = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, lengtharr - 1);
    prints("The sorted array is: %a", lengtharr, arr);

To see an example usage of the `quicksort` function, check out the source code file [quicksort.c](./Examplequicksort/quicksort.c).

### For example, to use the `sortup` function:

    #include "cvjp.h"
    ...
    int arr[5] = {4, 2, 7, 1, 3};
    int lengtharr = sizeof(arr) / sizeof(arr[0]);
    sortup(arr, lengtharr);
    prints("The sorted array is: %a", lengtharr, arr);

To see an example usage of the `sortup` function, check out the source code file [sortup.c](./Examplesortup/sortup.c).

### For example, to use the `totalarray` function:

    #include "cvjp.h"
    ...
    int arr[5] = {1, 2, 3, 4, 5};
    int lengtharr = sizeof(arr) / sizeof(arr[0]);
    int sum = totalarray(arr, lengtharr);
    prints("The sum of the array elements is: %d", sum);

To see an example usage of the `totalarray` function, check out the source code file [totalarray.c](./Exampletotalarray/totalarray.c).

### For example, to use the `arrayin` and `arrayout` functions:

    #include "cvjp.h"
    ...
    int arr[5], length = 5;
    prints("Enter the array elements:\n");
    arrayin(arr, length);
    prints("The array elements are:");
    arrayout(arr, length);

To see an example usage of the `arrayin` and `arrayout` functions, check out the source code file [arrayinout.c](./Examplearrayinout/arrayinout.c).

### For example, to use the `matrixin` and `matrixout` functions:

    #include "cvjp.h"
    ...
    int matrix[2][2], row = 2, col = 2;
    prints("Enter the matrix elements:\n");
    matrixin(matrix, row, col);
    prints("The matrix elements are:\n");
    matrixout(matrix, row, col);

To see an example usage of the `matrixin` and `matrixout` functions, check out the source code file [matrixinout.c](./Examplematrixinout/matrixinout.c).

### For example, to use `findindex` to find the index of a given value in an array:

    #include "cvjp.h"
    ...
    int arr[5] = {1, 2, 3, 4, 5}, length = 5, number = 3;
    int index = findindex(arr, length, number);
    prints("The index of %d in the array is: %d", number, index)

This will find the index of `val` in the array `arr` of size `n`.
To see an example usage of the `findindex` function, check out the source code file [./Examplefindindex/findindex.c](./Examplefindindex/findindex.c).

### For example, to use `minmaxf` to find the minimum and maximum values in an array:

    #include "cvjp.h"
    ...
    int arr[5]={1, 2, 3, 4, 5}, length = 5, min_val, max_val;
    minmaxf(arr, length, &min_val, &max_val);
    prints("The minimum value in the array is: %d", min_val);
    prints("The maximum value in the array is: %d", max_val);

This will find the minimum and maximum values in the array `arr` of size `n`.
To see an example usage of the `minmaxf` function, check out the source code file [minmaxf.c](./Exampleminmaxf/minmaxf.c).

### For example, to use `validemail` to check if a given email address is valid:

    #include "cvjp.h"
    ...
    char *email = "example@gmail.com";	// email address
    int is_valid = validemail(email);
    prints("The email address %s is %s", email, is_valid ? "valid" : "invalid");

This will check if the email address `email` is valid.
To see an example usage of the `validemail` function, check out the source code file [validemail.c](./Examplevalidemail/validemail.c).

### For example, to use `getemail` to extract the domain name from a given email address:

    #include "cvjp.h"
    ...
    char email[100];
    getemail(email);
    prints("Your email is: %s", email);

This will extract the domain name from the email address `email`.
To see an example usage of the `getemail` function, check out the source code file [getemail.c](./Examplegetemail/getemail.c).

### For example, to use `validpassword` to check if a given password is valid:

    #include "cvjp.h"
    ...
    char password[100] = "MyPassw0rd!";
    int is_valid = validpassword(password, 0, 0, 0, 0, 0, "", "");
    prints("The password %s is %s", password, is_valid ? "valid" : "invalid");

This will check if the password `password` is valid.
To see an example usage of the `validpassword` function, check out the source code file [validpassword.c](./Examplevalidpassword/validpassword.c).

### For example, to use `getpasswords` to requires the user to enter a password:

    #include "cvjp.h"
    ...
     char password[100], email[100] = "example@example.com", name[100] = "example";
    int length = 8, special_char = 1, uppercase = 1, lowercase = 1, digit = 1;
    getpasswords(password, length, special_char, uppercase, lowercase, digit, email, name);
    prints("Password: %s", password);

\*Note that the parameters passed to the function must match the requirements given in the function parameter.
For example, if you want to require a password with at least one digit, you need to set the "digit" parameter to 1.
To see an example usage of the `getpasswords` function, check out the source code file [getpasswords.c](./Examplegetpasswords/getpasswords.c).

### For example, to use `getpassword` requires the user to enter a password:

    #include "cvjp.h"
    ...
    char password[100];

    //  Get a password with a minimum length of 8, with at least 1 special character, 1 uppercase letter, 1 lowercase letter, 1 digit

    getpassword(password);
    printf("Your password is: %s\n", password);

\*Note When running the program, the getpassword function will be called to retrieve the password from the user with specific requirements
To see an example usage of the `getpassword` function, check out the source code file [getpassword.c](./Examplegetpassword/getpassword.c).

## Functions

- `prints`: prints formatted output to the console
- `factorial`: calculates the factorial of a number
- `quicksort`: sorts an array using the quicksort algorithm
- `sortup`: sorts an array in ascending order
- `totalarray`: calculates the sum of the elements of an array
- `arrayin`/`arrayout`: reads in an array from the user and prints it to the console
- `matrixin`/`mtrixout`: reads in a matrix from the user and prints it to the console
- `findindex`: finds the index of a specified value in an array
- `minmaxf`: finds the minimum and maximum values in an array
- `validemail`: checks if an email address is valid
- `getemail`: reads in an email address from the user
- `validpassword`: checks if a password meets certain requirements
- `getpasswords`/`getpassword`: reads in a password from the user and checks if it meets certain requirements
