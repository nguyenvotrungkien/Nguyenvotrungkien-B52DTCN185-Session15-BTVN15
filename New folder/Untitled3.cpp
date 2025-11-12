#include <stdio.h>

int daoNguoc(int n) {
    int dao = 0;

    while (n != 0) {
        dao = dao * 10 + n % 10;
        n /= 10;
    }

    return dao;
}

int main() {
    int x;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    printf("So dao nguoc la: %d\n", daoNguoc(x));
    return 0;
}
