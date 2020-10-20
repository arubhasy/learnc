//Program penjumlahan menggunakan for
#include <stdio.h>

int main(void)
{
    int sum = 0; //inisialisasi sum

    for (int number = 2; number <= 100; number += 2)
    {
        sum += number; //add number to sum
    }

    printf("Jumlah = %u\n", sum);
}