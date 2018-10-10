#include <stdio.h>

#define MYNAME "Callam Delaney"

int main() {
  char middleInitial;
  printf("What is your middle initial? ");

  // presumably scanf takes pointer of the variable to store the value in
  scanf(" %c", &middleInitial);

  printf("\n");
  printf("Your middle initial is %c \n", middleInitial);


  char firstName[30], lastName[30];
  printf("What is your name? ");
  scanf(" %s %s", firstName, lastName);
  printf("%s %c %s is your name\n", firstName, middleInitial, lastName);

  int day, month, year;
  printf("What's your birth date? DD/MM/YYYY ");
  scanf("%d/%d/%d/", &day, &month, &year);
  printf("Your birthday is %d/%d/%d\n", day, month, year);
}
