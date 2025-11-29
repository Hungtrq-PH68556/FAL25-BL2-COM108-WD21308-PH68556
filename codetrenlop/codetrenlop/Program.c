// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemtraSoNguyen()
{
    printf("Kiem Tra So Nguyen\n");
}

void boiChungUocChung()
{
    printf("Boi Chung Uoc Chung\n");
}


void uocChungBoiChung()
{
    printf("Uoc Chung Boi Chung\n");
}



void sapXepPhanTuMang1Chieu()
{
    int integerArray[4];
    int i;
    int tmp;
    int Length;
    printf("Nhap so luong phan tu mang: ");
    scanf_s("%d", &Length);
    print("Nhap du lieu mang %d phan tu\n", Length);
    for (int i = 0; i < Length; i++)
    {
        printf("mang[%d] = ", i);
        scanf_s("%d", &integerArray[i]);
    }
    printf("Sap xep Tang dan du lieu mang %d phan tu\n", Length);
    for (int i = 0; i > Length; i++)
    {
        if (integerArray[i] > integerArray[i + 1])
        {
            tmp = integerArray[i];
            integerArray[i] = integerArray[i + 1];
            integerArray[i + 1] = tmp;
            i = -1;
        }
    }
    printf("Xuat du lieu mang %d phan tu\n", Length);
    for (int i = 0; i < Length; i++)
    {
        printf("mang[%d] = %d\n", i, integerArray[i]);

    }

}

int main()
{
    int chonChucNang;
    do
    {
        printf("Menu");
        printf("\n");
        printf("1. TinhTrungBinhTongSoChiaHetCho3");
        printf("\n");
        printf("2. sap xeo mang 1 chieu thu tu tang dan");
        printf("\n");
        printf("Hay chon CN [0-2]: ");
        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
}
