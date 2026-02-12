/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [cs21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


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
    
    int sum = 0;
    int count = 0;
    
    // Tinh tong cac so chia het cho 3
    for(int i = 0; i < n; i++) {
        if(a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }
    
    // Kiem tra co so nao chia het cho 3 khong
    if(count > 0) {
        float average = (float)sum / count;
        printf("Trung binh cong cac so chia het cho 3 la: %.2f\n", average);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    return 0;
}
