// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.


#include <stdio.h>


// Bai 1
void thongTinThuCung() {
    char ma[20];
    char ten[50];
    int namsinh;
    int tuoi;
    int namHienTai = 2025;

    printf("Nhap ma thu cung: ");
    scanf_s("%s", ma);

    printf("Nhap ten thu cung: ");
    scanf_s("%s", ten);

    printf("Nhap nam sinh cua thu cung: ");
    scanf_s("%d", &namsinh);


    tuoi = namHienTai - namsinh;


    printf("Thong tin thu cung\n");
    printf("Ma thu cung: %s\n", ma);
    printf("Ten thu cung: %s\n", ten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi cua thu cung: %d\n", tuoi);



}
// Bai 2
void tinhTong()
{
    printf("Tinh Tong\n");
    int n, i, tong = 0;

    do {
        printf("Nhap n (n > 3): ");
        scanf_s("%d", &n);
    } while (n <= 3);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            tong += i;
        }
    }

    printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);

    if (n % 5 == 0) {
        printf("%d chia het cho 5\n", n);
    }
    else {
        printf("%d KHONG chia het cho 5\n", n);
    }
}
// Bai 3
void thongTinCuaHang()
{
    printf("Thong Tin Cua Hang\n");
    printf("Ten cua hang: PET SHOP ABC\n");
    printf("Dia chi: Ha Noi\n");
    printf("So dien thoai: 0123 456 789\n");
}




int main()
{
    int chonChucNang;
    do
    {
        printf("Menu");
        printf("\n");
        printf("1.thongTinThuCung");
        printf("\n");
        printf("2.tinhTong");
        printf("\n");
        printf("3.thongTinCuaHang");
        printf("\n");
        printf("0. thoat");
        printf("\n");
        printf("vui long chon chuc nang: ");
        scanf_s("%d", &chonChucNang);
        if (chonChucNang == 0)
        {
            printf("Thoat chuong trinh.\n");
            break;
        }
        switch (chonChucNang) {
        case 1:
            thongTinThuCung();
            break;
        case 2:
            tinhTong();
            break;
        case 3:
            thongTinCuaHang();

        case 0:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le, vui long chon chuc nang trong menu.\n");
        }
    } while (chonChucNang != 0);
    return 0;
}