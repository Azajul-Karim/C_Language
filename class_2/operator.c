#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // n = 123

    int c = n % 10; // c = 1
    n = n / 10;     // n = 23

    int b = n % 10; // b = 3
    n = n / 10;     // n = 2

    int a = n % 10; // c =

    printf("a = %d, b = %d, c = %d\n", a, b, c);
}