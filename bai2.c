/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [cs21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhap mang
    for(int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Gan max va min bang phan tu dau tien
    int max = a[0];
    int min = a[0];

    // Tim max va min
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    printf("Gia tri lon nhat la: %d\n", max);
    printf("Gia tri nho nhat la: %d\n", min);

    return 0;
}


