// Included because... duh.
#include <stdio.h>
// Included for rand()
#include <stdlib.h>
// Included for the random seed
#include <time.h>

int sumDice(int sides, int number)
{
   int i;
   int sum=0;
   // Loops through the number of dice we want to roll and sums them
   for (i = 1; i <= number; i++) {
      // rand() gives a big number, so I modulate by 10 and then add one so it starts at 1
      sum += ( rand() % sides + 1 );
   }
   return sum;
}
int main()
{
   // Seeds the random number
   srand(time(NULL));

   int numDice,sides;

   printf("How many dice would you like to roll?\n");
   scanf("%d",&numDice);getchar();
   printf("%d\n",numDice);
   printf("How many sides on them?\n");
   scanf("%d",&sides);getchar();
   printf("%d\n",sides);
   printf("The result is %d\n",sumDice(sides,numDice));

   return 0;
}

/*
def diceBag():
  dieChoice = 1
  numDice = 1
  while dieChoice and numDice and dieChoice > 0 and numDice > 0:
    dieChoice = raw_input("What type of die would you like to roll?: ")
    dieChoice = int(dieChoice)
    if dieChoice < 1:
      break
    numDice = raw_input("How many dice would you like to roll?: ")
    numDice = int(numDice)
    if numDice < 1:
      break
    sum = 0
    for result in range(numDice):
      result = random.randint(1, dieChoice)
      sum += result
      print result,
    print "Sum: ", sum, "\n" 

while True:
  print "Welcome to TAP!\n"
  print "1. Dice Bag"
  print "2. Character Creation"
  print "3. Item Creation"
  print "4. Campaign Creation"
  print "5. Settings"
  print "0. Quit\n"

  selection = raw_input("Please enter the number of your selection: ")
  selection = int(selection)
  if selection == 1:
    print "Entering Dice Bag..."
    diceBag() 
  if selection == 2:
    print "Entering Character Creation..."
    break  # TODO
      # enter characters
  if selection == 3:
    print "Entering Item Creation..."
    break  # TODO
      # enter item creation
  if selection == 4:
    print "Entering Campaign Creation..."
    break  # TODO
      # enter campaign creation
  if selection == 0:
    print "Leaving TAP."
    break


    */
