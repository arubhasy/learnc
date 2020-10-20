//iterasi menggunakan do...while
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1; //inisialisasi counter

    do{
        printf("%u  ", counter);
    }while (++counter <=10);
}