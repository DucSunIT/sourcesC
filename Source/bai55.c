// HỌC C CÙNG MÌNH 
// Bài 55 : Tìm kiếm chuỗi sử dụng hàm strch()
// và tự xây dựng hàm
#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr;
    char fullName[50] = "pham tien duc";
    printf("%s", fullName);
    ptr = &fullName;
    strchr(ptr, "t");
    printf(ptr);
    return 0;
}