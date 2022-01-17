/*
// _________             ____________________ ________        ____.________________________________________
// \_   ___ \            \______   \______   \\_____  \      |    |\_   _____/\_   ___ \__    ___/   _____/
// /    \  \/    ______   |     ___/|       _/ /   |   \     |    | |    __)_ /    \  \/ |    |  \_____  \
// \     \____  /_____/   |    |    |    |   \/    |    \/\__|    | |        \\     \____|    |  /        \
//  \______  /            |____|    |____|_  /\_______  /\________|/_______  / \______  /|____| /_______  /
//         \/                              \/         \/                   \/         \/                \/

Change log:
[/] Initial release
[/] Check for any errors when compiling the code.
[ToDo]
[] Make things less bulky.
*/

// + Headers +
#include <stdio.h>
#include "var.c" // Including variables from another file :D
#include <stdlib.h>

// Function to draw a boundary
void draw()
{
 // system("cls");
 for (i = 0; i < height; i++)
 {
  for (j = 0; j < width; j++)
  {
   if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
   {
    printf("#");
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
}

// Driver Code
int main()
{
 // Function Call
 draw();

 return 0;
}