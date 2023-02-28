#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "cvjp.h"

// hàm in ra màn hình sử dụng strings format và hỗ trợ template literals
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
// Hàm tính giai thừa
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
// Hàm hoán vị hai số nguyên
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Hàm sắp xếp nhanh một mảng số nguyên
void quicksort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    // Phân đoạn mảng thành hai phần: phần nhỏ hơn pivot và phần lớn hơn pivot
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
    // Gọi đệ quy để sắp xếp hai phần đã phân đoạn
    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}
// Hàm sắp xếp mảng arr theo thứ tự tăng dần
void sortup(int arr[], int length)
{
    // Khai báo biến tạm tempNum để lưu trữ giá trị tạm thời trong quá trình đổi chỗ các phần tử
    int tempNum;
    // Duyệt qua tất cả các phần tử của mảng arr
    for (int i = 0; i < length; i++)
    {
        // Duyệt qua tất cả các phần tử của mảng arr trừ phần tử cuối cùng
        for (int j = 0; j < length - 1; j++)
        {
            // Nếu phần tử thứ j lớn hơn phần tử thứ j+1 thì đổi chỗ vị trí của 2 phần tử này
            if (arr[j] > arr[j + 1])
            {
                tempNum = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempNum;
            }
        }
    }
}
// hàm tính tổng các phần tử trong mảng
int totalarray(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// hàm nhập một array dựa theo length
void arrayin(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
// hàm xuất ra một array dựa theo length
void arrayout(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
// hàm nhập vào một ma trận theo row, col
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
// hàm xuất ra một ma trận theo row, col
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
// hàm tìm index của một phần tử trong một mảng
int findindex(int arr[], int length, int num)
{
    for (int i = 0; i < length; i++)
        if (arr[i] == num)
            return i;
    return -1;
}
// tìm số lớn nhất, nhỏ nhất của một mảng, return ra các biến trỏ min và max
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
} // hàm kiểm tra email có hợp lệ hay không
// hàm trả về 1 nếu email hợp lệ, 0 nếu không hợp lệ
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
// hàm nhập email nếu không hợp lệ thì yêu cầu nhập lại
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
// hàm kiểm tra mật khẩu
int validpassword(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[])
{
    // Kiểm tra độ dài
    if (length > 0 && strlen(password) < length)
    {
        return 0;
    }
    // Kiểm tra ký tự đặc biệt
    if (special_char && strspn(password, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") == strlen(password))
    {
        return 0;
    }
    // Kiểm tra chữ hoa
    if (uppercase && strspn(password, "abcdefghijklmnopqrstuvwxyz0123456789!@#$%^&()_-+={}[]|\\:;\"'<>,.?/~") == strlen(password))
    {
        return 0;
    }
    // Kiểm tra chữ thường
    if (lowercase && strspn(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+={}[]|\\:;\"'<>,.?/~") == strlen(password))
    {
        return 0;
    }
    // Kiểm tra số
    if (digit && strspn(password, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&()_-+={}[]|\\:;\"'<>,.?/~`") == strlen(password))
    {
        return 0;
    }
    // Kiểm tra trùng với email
    if (strlen(email) > 0 && strstr(password, email) != NULL)
    {
        return 0;
    }
    // Kiểm tra trùng với tên người dùng
    if (strlen(name) > 0 && strstr(password, name) != NULL)
    {
        return 0;
    }
    return 1;
}
// hàm nhập mật khẩu nếu không hợp lệ thì yêu cầu nhập lại
void getpasswords(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[])
{
    while (1)
    {
        printf("Nhap mat khau: ");
        fgets(password, 100, stdin);
        password[strcspn(password, "\n")] = '\0';
        if (validpassword(password, length, special_char, uppercase, lowercase, digit, email, name))
        {
            break;
        }
        printf("Mat khau khong hop le, vui long nhap lai.\n");
    }
}
// hàm nhập mật khẩu với tham số mặc định
void getpassword(char password[])
{
    getpasswords(password, 0, 0, 0, 0, 0, "", "");
}