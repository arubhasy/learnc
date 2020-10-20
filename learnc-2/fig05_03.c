//Program menghitung pangkat
#include <stdio.h>

int square(int y); //function prototype

int main(void)
{
    //loop 10x dan hitung pangkat x
    for (int x = 1; x <= 10; ++x){
        printf("%d   ", square(x)); //function call
    }
}

//square function definition, return the square of its parameter
int square(int y)
{
    return y * y;
}