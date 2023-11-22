#include <stdio.h>
// Hàm có chức năng nhập mảng
void nhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap a [%d] : ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm có chức năng xuất mảng
void xuatMang(int a[], int n)
{
    printf("Mang: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

/*tìm kiêm tuần tự với độ phức tạp O(n)
- Đi từ đầu mảng đến cuối mảng nếu tìm thấy giá trị k
sẽ trả về vị trí của giá trị đấy
- Ngược lại sẽ trả về -1
*/
int timKiemTuanTu(int a[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
            return i;
    }
    return -1;
}
int main()
{
    int n, a[100], k;
    printf("Nhap n : ");
    scanf("%d", &n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\nNhap gia tri can tim : ");
    scanf("%d", &k);
    printf("Vi tri cua k la : %d ",timKiemTuanTu(a,n,k));
    return 0;
}