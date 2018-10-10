#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define true 1
#define false 0


int main() {
  srand(time(NULL)); // seed once per run

  int howManyBits = 0; // or how many multiplications
  printf("How many bits? \n");
  scanf("%d", &howManyBits);

  int myIncrementor = 1, myMultiplyer = 1, finalValue = 1;


  while(myIncrementor < howManyBits) {
    myMultiplyer *= 2;
    finalValue = finalValue +  myMultiplyer;
    myIncrementor++;
  }

  if((howManyBits == 0) || (howManyBits == 1)){
    printf("Specified bits as 1 or 0..\n");
  } else {
    printf("Biggest integer in this many bits: %d\n", finalValue);
  }

  int bestNumberEver = rand() % 10, guess = 0;
  printf("Ok, now guess the PC's favourite number between 1 and 10:\n\n");
  while(true){
    scanf("%d", &guess);
    if (guess == bestNumberEver) {
      printf("You win! \n)");
      break;
    } else if (guess < bestNumberEver) {
      printf("It's higher!\n");
    } else {
      printf("It's lower!\n");
    }
  }

  char shirtSize;

  // do while loop
  do {
    printf("What size of shirt are you? (S, M, L): ");
    scanf("%c", &shirtSize);
  } while (shirtSize != 'S' && shirtSize != 'M' && shirtSize != 'L');

  for (int i = 0; i <= 20; i++){
    if (i % 2 == 0) {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}
