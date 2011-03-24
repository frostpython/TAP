/*
This file is part of TAP.

TAP is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

TAP is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with TAP.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h> // Included because... duh.
#include <stdlib.h> // Included for rand()
#include <time.h> // Included for the random seed

int SumDice(int sides, int number, int verbose)
// Accepts number of sides on each die, number of dice to roll, and whether you want to hear each roll
{
   int i, num;
   int sum=0;

   // Puts a little whitespace on the screen. This will need to be cleaned later
   if ( verbose != 0 ) {
      printf("\n");
   }
   // Loops through the number of dice we want to roll and sums them
   for (i = 1; i <= number; i++) {
      // rand() gives a big number, so I modulate by 10 and then add one so it starts at 1
      num = ( rand() % sides + 1 );
      if ( verbose != 0 ) {
         printf("This roll is %d\n",num);
      }
      sum += num;
   }
   return sum;
}

int DiceBag()
{
   // Seeds the random number
   srand(time(NULL));
   // Sets them to 0 to error out if return is entered
   int numDice,sides;
   numDice = sides = 0;

   // The clears the screen. It seems a little hacky to work on Windoze too, but it works. Fix maybe?
   if (system("cls")) system("clear");

   while ( numDice < 1 ) {
      printf("How many dice would you like to roll?\n");
      scanf("%d",&numDice);getchar();
      fflush(stdin);
   }
   while ( sides < 1 ) {
      printf("How many sides on them?\n");
      scanf("%d",&sides);getchar();
      fflush(stdin);
   }
   printf("\n\nThe result is %d\n",SumDice(sides,numDice,1));

   return 0;
}

int main()
{

   int menuNum;

   // This loop is to make sure the user doesn't enter anything strange
   while ( menuNum < 0 || menuNum > 5 ) {
      fflush(stdin);
      printf("Welcome to TAP!\n");
      printf("1. Dice Bag\n");
      printf("2. Character Creation\n");
      printf("3. Item Creation\n");
      printf("4. Campaign Creation\n");
      printf("5. Settings\n");
      printf("0. Quit\n");

      scanf("%d",&menuNum);getchar();

      // This directs all menu options to their appropriate functions
      switch ( menuNum) {
      case 1:
         DiceBag();
         break;
      case 2:
      case 3:
      case 4:
      case 5:
         printf("Oops! This isn't implemented yet. Poke us in IRC to let us know you want it\n");
         break;
      case 0:
         printf("Thanks for playing!\n");
         exit;
         break;
      default:
         printf("Seems like you have mistyped. Please try again. 0 will let you exit\n");
         break;
      }
   }

   return 0;
}
