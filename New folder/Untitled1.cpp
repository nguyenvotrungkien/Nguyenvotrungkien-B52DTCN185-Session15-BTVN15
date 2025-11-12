#include <stdio.h>

int hieu(int a, int b) {
    return a - b;
}
int tich(int a, int b) {
    return a * b;
}
int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d",&x);
    
    printf("Nhap so thu hai: ");
    scanf("%d",&y);

    printf("Hieu hai so la: %d\n", hieu(x, y));
    printf("Tich hai so la: %d\n", tich(x, y));

    return 0;
}
