// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void ThongTinThuCung()
{
    printf("Thong tin thu cung\n");
    char ma[3][20], ten[3][30];
    int namSinh[3];
    int tuoi;

    printf("\n--- NHAP THONG TIN THU CUNG ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Thu Cung:\n", i + 1);
        printf("Ma Thu Cung: ");
        scanf_s("%s", ma[i]);
        printf("Ma Thu Cung: ");
        scanf_s("%s", ten[i]);
        printf("Nam Sinh: ");
        scanf_s("%d", &namSinh[i]);
    }

    printf("\n--- THONG TIN DA NHAP ---\n");
    for (int i = 0; i < 3; i++){
        int tuoi = 2025 - namSinh[1];
        printf("Ma: %s | Ten: %s | Nam Sinh: %d | Tuoi: %d\n",
        ma[i], ten[i], namSinh[i], tuoi);
    }
}
void TinhTong()
{
    printf("Tinh tong\n");
    int n;
    int tong = 0;
    do {
        printf("Nhap n: ");
        scanf_s("%d", &n);
    } while (n < 3);
    
    for (int i = 1; i <= n; i++)
    {
        if (n > 3 && i % 2 != 0)
        {
            tong += i;

        }
        if (tong + (n % 2 == 0));


    }
    printf("Tong cac so le tu 1 den n la: %d\n, tong");
    if (n % 5 == 0)
    {
        printf("N chia het cho 5");
    }

    else
    {
        printf("N khong chia het cho 5");
    }
}
void ThongTinCuaHang()
{
    printf("Thong tin cua hang\n");
    int soLuong;
    char tuoi[50];
    int n;
    printf("Thong tin cua hang\n ");
    printf("Nhap so thu cung: ");
    scanf_s("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap tuoi Thu Cung %d: ", i + 1);
        fgets(tuoi, sizeof(tuoi), stdin);
        tuoi[strcspn(tuoi, "\n")] = '\0';
    }
}



int main()
{
    int chonChucNang;
    do
    {
        printf("    MENU\n    ");
        printf("1. Thong tin thu cung\n");
        printf("2. Tinh tong\n");
        printf("1. Thong tin cua hang\n");
        printf("0. Thoat\n");
        printf("Hay chon chuc nang tu [0-3]\n");
        scanf_s("%d", &chonChucNang);
        LapChucNang(chonChucNang);
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

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184