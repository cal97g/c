#include <stdio.h>

int main() {
  printf("\n");

  int a = 6, b = 6;

  if (a > b) {
    printf("a is greater than b\n");
  } else if ( a < b ) {
    printf("a is less than b\n");
  } else {
    printf("a is equal to b\n");
  }

  int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;

  /*
    does bob qualify for a raise?
    he qualifies if:
    Missed less than 10 days of work AND has over 30000 in sales OR
    he has signed up more than 30 new customers.
  */

  // I think I'm using an odd version of gcc thanks to apple, this throws a
  // warning for me.
  if (bobMissedDays < 10 && bobTotalSales > 3000 || bobNewCust > 30){
    printf("Bob qualifies for a raise!\n");
  } else {
    printf("Bob doesn't qualify! Sorry Bob. :( ");
  }
  int custAge = 38;
  // Conditional operator thing (evaluation) operator truth val : false val;
  char* legalAge = (custAge > 21) ? "true" : "false";
  //  ^ char pointer
  printf("Is the customer of legal age? %s\n", legalAge);

}
