//Program menghitung rata2 nilai dg Iterasi
#include <stdio.h>

//main function
int main(void)
{
    //declare variables
    int counter, grade, total, average;

    //inisialisasi var total & counter
    total = 0;
    counter = 1;

    while (counter <= 10){ //loop 10x --> counter sbg nilai penjaga/sentinel value
        printf("Masukkan nilai ke-%d: ", counter); //perintah untuk input
        scanf("%d", &grade); //input grade
        total = total + grade; //add grade ke total
        //counter = counter + 1;
        counter++;
    }
    
    average = total/10; //hitung grade rata2
    printf("Nilai rata2 adalah: %d\n", average); //print grade rata2
}
