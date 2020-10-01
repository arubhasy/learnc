//Program Penjumlahan 2 Bilangan
#include <stdio.h>

//function main begins program execution
int main()
{
    int integer1; //bilangan ke-1 yg akan diinput user
    int integer2; //bilangan ke-2 yg akan diinput user

    printf("Masukkan bilangan bulat pertama\n");
    scanf("%d", &integer1); //baca bilangan pertama

    printf("Masukkan bilangan bulat kedua\n");
    scanf("%d", &integer2); //baca bilangan kedua

    int sum = integer1 + integer2; //penjumlahan dua bilangan

    printf("Hasil penjumlahan = %d\n", sum); //tampilkan hasil penjumlahan
}
//end of main function