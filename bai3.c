/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [cs21302]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

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

    // Sap xep giam dan (Bubble Sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {   // doi cho neu a[i] nho hon a[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Xuat mang sau khi sap xep
    printf("Mang sau khi sap xep giam dan la:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

