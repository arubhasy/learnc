// Array Multidimensi
#include <stdio.h>

void printArray(int a[][3]); // function prototype

// Main function
int main(void)
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Baris array1 adalah:");
    printArray(array1);

    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("Baris array2 adalah:");
    printArray(array2);

    int array3[2][3] = {{1, 2}, {4}};
    puts("Baris array3 adalah:");
    printArray(array3);
}

// Fungsi untuk menampilkan array
void printArray(int a[][3])
{
    // loop per baris
    for(size_t i = 0; i <= 1; ++i){
        // tampilkan nilai kolom
        for(size_t j = 0; j <=2; ++j){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}