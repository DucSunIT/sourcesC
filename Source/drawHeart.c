// HỌC C CÙNG MÌNH
// IN RA MÀN HÌNH, HÌNH TRÁI TIM CÓ KÍCH THƯỚC MxN=6x7
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// viết hàm
void drawHeart(int N)
{
    system("color 4");
    int i, j;
    char c = 3;
    // khởi tạo 2 vòng lặp for lồng nhau
    for (i = 1; i < N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            // điều kiện
            Sleep(100);
            if (!((i == 1 && (j == 1 || j == 4 || j == 7))
                || (i == 4 && (j == 1 || j == 7))
                || (i == 5 && (j <= 2 || j >= 6))
                || (i == 6 && (j <= 3 || j >= 5))))
            { 
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
// chương trình chính
int main()
{
    int M = 6, N = 7;
    char c = 3;
    // lời gọi hàm
    drawHeart(N);
    return 0;
}