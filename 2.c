#include <stdio.h>
#include <math.h>

int kiemtrasochinhphuong(int n) {
    int canbachai = sqrt(n);
    return (canbachai * canbachai == n);
}

int main() {
    int a;

    printf("Nhap so can kiem tra: ");
    scanf("%d", &a);

    if (kiemtrasochinhphuong(a)) {
        printf("%d la so chinh phuong.\n", a);
    } else {
        printf("%d khong la so chinh phuong.\n", a);
    }

    return 0;
}
