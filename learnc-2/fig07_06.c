#include <stdio.h>

int cubeByValue(int n); // prototype

int main(void)
{
    int number = 5;

    printf("Original number is %d", number);

    //pass number by value
    number = cubeByValue(number);

    printf("\nNew number is %d", number);
}

int cubeByValue(int n)
{
    return n * n * n;
}