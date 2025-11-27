// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
    int n;
    printf("Moi nguoi dung nhap gia tri n: ");
    scanf_s("%d", &n);

    int* mang = (int*)malloc(n * sizeof(int));

    float tong = 0;
    float tb;
    int count = 0;

    // Nhap mang
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &mang[i]);
    }

    // Tinh tong cac so chia het cho 3
    for (int i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0)
        {
            tong += mang[i];
            count++;
        }
    }

    if (count > 0)
    {
        tb = tong / count;
        printf("Trung binh cac so chia het cho 3: %.2f", tb);
    }
    else
    {
        printf("Khong co so nao chia het cho 3!");
    }

    free(mang);
    return 0;

}

