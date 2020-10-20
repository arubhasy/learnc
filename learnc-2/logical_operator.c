//penentuan tarif berdasarkan usia pengunjung
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int age;
    int price;
    char ulang[2];

    do{
        printf("Masukkan usia anda = ", age);
        scanf("%d", &age);
        if (age <= 5 || age >= 65){
            price = 7000;
        }
        else
        {
            price = 10000;
        }
        printf("Tarif = %d\n", price);

        printf("Apakah ingin mengulangi kembali? (Y/T) ", ulang);
        scanf("%s", ulang);

        //printf("Pilihan anda = %s\n", ulang);
    }while (strcmp (ulang, "Y") == 0);
}