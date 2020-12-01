#include <stdio.h>

int main(void)
{
    int a = 7;
    int *aPtr = &a; //set aPtr to the address of a

    printf("Alamat a adalah %p"
            "\nAlamat dari aPtr adalah %p", &a, aPtr);

    printf("\nNilai a adalah %d"
            "\nNilai dari aPtr adalah %d", a, *aPtr);
   
}