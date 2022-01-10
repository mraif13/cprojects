

// _________             ____________________ ________        ____.________________________________________
// \_   ___ \            \______   \______   \\_____  \      |    |\_   _____/\_   ___ \__    ___/   _____/
// /    \  \/    ______   |     ___/|       _/ /   |   \     |    | |    __)_ /    \  \/ |    |  \_____  \ 
// \     \____  /_____/   |    |    |    |   \/    |    \/\__|    | |        \\     \____|    |  /        \
//  \______  /            |____|    |____|_  /\_______  /\________|/_______  / \______  /|____| /_______  /
//         \/                              \/         \/                   \/         \/                \/

// Project name: Password generator.
// A extremely basic password generator.

// Include libs
#include <stdio.h>  // Includes input and output stuff
#include <math.h>   // Mathematical stuff
#include <stdlib.h> // Defines 4 variables types | Used for peforming general functions.
#include <time.h>   // Time.

// Using void -> Indicates that the function doesn't return a value. (valueless (like my soul xD))
void randomPassGen(int N)
{

 // Int counter.

 int i = 0;

 int randomizerz = 0;

 // Password generator part

 // Making use of time so the password is different everytime the program is run.
 srand((unsigned int)(time(NULL)));

 // Array of numbers;
 char numbers[] = "01234567891011121314151617181920"; // 1 -> 20

 // Array of letters (lowercase);
 char letters[] = "abcdefghijklmnopkrstuvwxyz";

 // Array of letters (uppercase);
 char lettersUpper[] = "ABCEFGHIJKLMNOPKRSTUVWXZ";

 // Array of symbols (increase amount)
 char symbols[] = "!@#$^&*? ";

 // Array of word list (Special thanks to eff.org - shortlist.txt :D)
 // Mixed with random word we can make the password more complex. 
 char word[] = "ajaralarmaliaalibialiealikealiveamuseapplearenaarmoraalibialiealikrweiondeowidmwex";
 // Storing the password inside N variable :D
 char passwd[N];

 // Rando-mizer-BeepBoop v1 (making use of for loop :D)

 randomizerz = rand() % 4;

 for (i = 0; i < N; i++)
 {

  if (randomizerz == 1)
  {
   passwd[i] = numbers[rand() % 10];
   randomizerz = rand() % 4;
   printf("%c", passwd[i]);
  }

  else if (randomizerz == 2)
  {
   passwd[i] = symbols[rand() % 8];
   randomizerz = rand() % 4;
   printf("%c", passwd[i]);
  }

  else if (randomizerz == 3)
  {
   passwd[i] = lettersUpper[rand() % 26];
   randomizerz = rand() % 4;
   printf("%c", passwd[i]);
  }
  else if (randomizerz == 4)
  {
   passwd[i] = letters[rand() % 26];
   randomizerz = rand() % 4;
   printf("%c", passwd[i]);
  }
  else
  {
   passwd[i] = word[rand() % 66];
   randomizerz = rand() % 4;
   printf("%c", passwd[i]);
  }
 }
}

// The code that's going to drive everything :D

int main()
{

 int N;
 int answe;
 int defaultn = 10;

 printf("Enter length to be generated:  ");
 scanf("%d", &N);

 if (N <= 0)
 {
  printf("Length cannot be lower than 1! \n");
 }

 else
 {
  printf("[!] Generated password: ");
  randomPassGen(N);
 }
 // Calling the function
 return 0;
}
