// HỌC C CÙNG MÌNH
// Bài 54: Lập trình kiểm tra chuỗi đối xứng
#include <stdio.h>
#include <string.h>

// ham kiem tra chuoi doi xung
int ktChuoiDoiXung(char str[])
{
    // lay ra do dai cua chuoi
    size_t len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

// ham xoa xuong dong
void xoaXuongDong(char str[])
{
    size_t len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
}
int main()
{
    char str[50];
    printf("Nhap Chuoi : ");
    fgets(str, sizeof(str), stdin);
    printf("Chuoi Vua Nhap La : %s", str);
    xoaXuongDong(str);
    if (ktChuoiDoiXung(str))
    {
        printf("\nChuoi Doi Xung !");
    }
    else
    {
        printf("\nChuoi Khong Doi Xung !");
    }
    return 0;
}