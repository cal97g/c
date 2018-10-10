#import <stdio.h>

int globalVar = 100;

int main() {
  int a = 16, b = 32, c = 64;
  float x = 1.4, y = 0.4, z = 2.5;

  printf("Integer calc %d\n", b / a);
  printf("Float calc %f\n", x / y);
  printf("Modulus %d\n", b % a);

  printf("Without Parenthesis %d\n", 3 + 6 * 10);
  printf("With Parenthesis %d\n", (3 + 6) * 10);

  int ex = 40;
  ex += 12;
  ex = ex * 32;
  printf("%d\n", ex);

  /*
    operators:
    -= subtract from the value
    += add to the value
    *= multply the value
    %= divide the value
    ++ invrement the value
  */

  // this will modify the base value
  printf("%d\n", ex += 100);
  printf("%d\n", ex);
  printf("%d\n", ex + 66);


}
