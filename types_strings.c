/* multiline comment. Video tutorial https://www.youtube.com/watch?v=nXvy5900m3M&t=4s
*/

// single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Callam Delaney"

int globalVar = 100;

int main() {
  char firstLetter = 'C';
  int age = 21; // +, - 32768
  long int superBigNumber = -234345544;

  float  ethbtc = 0.12344;
  double realybigfloat = 0.2343433333;
  printf("This will print to screen! \n");  // \\ to use backslash
  /*
    Conversion characters:
    d > integer
    f > floating point
    e > floating point in e notation
    ld > long ints
    c > single char
    s > string
  */
  printf("My age is: %d\n", age);
  printf("Big int %ld\n", superBigNumber);
  printf("ethbtc = %.8f\n", ethbtc);
  printf("first char %c\n", firstLetter);
  printf("my name is %s\n", "Callam");

  // boring memory management:
  char myName[] = "Callam Delaney"; // 'Callam_Delaney' +  \n + Terminator
  strcpy(myName, "Bob Smith"); // only less than previous memory alloc
  printf("%s\n", myName);
}
