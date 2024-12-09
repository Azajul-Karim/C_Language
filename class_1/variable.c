#include <stdio.h>
int main()
{
  int a = 20;
  int b;
  b = 10;
  int c = 30, d = 40;
  int sum = a + b;
  int sub = a - b;
  printf("%d\n", a);
  printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", sub);

  double PI = 3.14159;
  double n = 10.3653443156;
  float f = 10.3653443156;
  long long int number = 1000000000000000000;
  unsigned int number2 = 1000000000;
  unsigned long long int number3 = 1000000000000000000;

  printf("PI = %lf\n", PI);
  printf("n = %.7lf\n", n);
  printf("f = %.3f\n", f);
  printf("number = %lld\n", number);
  printf("number2 = %u\n", number2);
  printf("number3 = %llu\n", number3);
}

// Note
// number = 32bit
//  4byte = 32bit
//  8byte = 64bit
