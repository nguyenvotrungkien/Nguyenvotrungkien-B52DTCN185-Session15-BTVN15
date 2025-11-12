#include <stdio.h>

int tongChuSo(int n) {
    int tong = 0;

    
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        tong += n % 10;  
        n /= 10;       
    }

    return tong;
}

int main() {
    int x;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    printf("Tong cac chu so la: %d\n",tongChuSo(x));

    return 0;
}
