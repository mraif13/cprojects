// _________             ____________________ ________        ____.________________________________________
// \_   ___ \            \______   \______   \\_____  \      |    |\_   _____/\_   ___ \__    ___/   _____/
// /    \  \/    ______   |     ___/|       _/ /   |   \     |    | |    __)_ /    \  \/ |    |  \_____  \ 
// \     \____  /_____/   |    |    |    |   \/    |    \/\__|    | |        \\     \____|    |  /        \
//  \______  /            |____|    |____|_  /\_______  /\________|/_______  / \______  /|____| /_______  /
//         \/                              \/         \/                   \/         \/                \/

// Problem to solve: A program that reads three numbers and prints the largest one.

#include <stdio.h>

int main()
{

 int num1, num2, num3;

 // Asking for first input

 printf("Enter three different numbers: ");
 scanf("%d %d %d", &num1, &num2, &num3);


 if (num1 > num2)
 {

  if (num1 > num3)
  {
   printf("%d is the biggest among the three!", num1);
  }
  else
  {
   printf("%d is the biggest number!", num3);
  }
 }

 else if (num2 > num3)
 {
  printf("%d is the biggest among the three!", num2);
 }
 else
 {
  printf("%d is the biggest number among the three!", num3);
 }
}
