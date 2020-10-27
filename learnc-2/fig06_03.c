#include <stdio.h>

//main function
int main(void)
{
    int n[5]; // n adalah array yg memiliki 5 bilangan bulat
    int num = 1;

    // set array dengan nilai 0
    for (size_t i = 0; i < 5; ++i){
        n[i] = num;
        num = num + 2;
        printf("Elemen ke-%d: %d\n", i, n[i]);
    }
}