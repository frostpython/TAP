
import random
import sys

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


