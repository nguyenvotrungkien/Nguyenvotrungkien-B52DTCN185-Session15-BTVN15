#include <stdio.h>

int tongMang(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Tong cac phan tu trong mang la: %d\n", tongMang(a, n));

    return 0;
}