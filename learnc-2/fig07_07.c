#include <stdio.h>

int cubeByReference(int *nPtr); // prototype

int main(void)
{
    int number = 5;

    printf("Original number is %d", number);

    //pass number by value
    cubeByReference(&number);

    printf("\nNew number is %d", number);
}

int cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}