/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [ps47422]
 * Lớp:       [cs21302]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n, m;

    printf("Nhap so hang: ");
    scanf("%d", &n);

    printf("Nhap so cot: ");
    scanf("%d", &m);

    int a[n][m];

    // Nhap ma tran
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Tinh binh phuong va xuat ma tran moi
    printf("Ma tran binh phuong la:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j] * a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

