// File cvjp.h
#ifndef CVJP_H
#define CVJP_H
// Khai báo các hàm C muốn sử dụng trong thư viện
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>

// hàm in ra màn hình sử dụng strings format và hỗ trợ template literals
void prints(const char *format, ...);
// Hàm tính giai thừa
int factorial(int n);
// Hàm hoán vị hai số nguyên
void swap(int *a, int *b);
// Hàm sắp xếp nhanh một mảng số nguyên
void quicksort(int arr[], int left, int right);
// Hàm sắp xếp mảng arr theo thứ tự tăng dần
void sortup(int arr[], int length);
// hàm tính tổng các phần tử trong mảng
int totalarray(int arr[], int length);
// hàm nhập một array dựa theo length
void arrayin(int arr[], int length);
// hàm xuất một array dựa theo length
void arrayout(int arr[], int length);
// hàm nhập vào một ma trận theo row, col
void matrixin(int matrix[][100], int row, int col);
// hàm xuất ra một ma trận theo row, col
void matrixout(int matrix[][100], int row, int col);
// hàm tìm index của một phần tử trong một mảng
int findindex(int arr[], int length, int num);
// tìm số lớn nhất, nhỏ nhất của một mảng, return ra một object
void minmaxf(int arr[], int length, int *min, int *max);
// hàm kiểm tra email có hợp lệ hay không
int validemail(char email[]);
// hàm nhập email nếu không hợp lệ thì yêu cầu nhập lại
void getemail(char email[]);
// hàm kiểm tra mật khẩu
int validpassword(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[]);
// hàm nhập mật khẩu nếu không hợp lệ thì yêu cầu nhập lại
void getpasswords(char password[], int length, int special_char, int uppercase, int lowercase, int digit, char email[], char name[]);
// hàm nhập mật khẩu với tham số mặc định
void getpassword(char password[]);
#endif // Kết thúc macro CVJP_H