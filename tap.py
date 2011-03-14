
def mainMenu():
  print "Welcome to TAP!"
  print "\n1. Dice Bag"
  print "2. Character Creation"
  print "3. Item Creation"
  print "4. Campaign Creation"
  selection = raw_input("\nPlease enter the number of your selection: ")
  selection = int(selection)
  if selection == 1:
    print "Entering Dice Bag..."
#    break  # change this soon
      # enter dice bag
  if selection == 2:
    print "Entering Character Creation..."
#    break  # change this soon
      # enter characters
  if selection == 3:
    print "Entering Item Creation..."
#    break  # TODO
      # enter item creation
  if selection == 4:
    print "Entering Campaign Creation..."
#    break  # TODO
      # enter campaign creation
  else:
    print "Unable to understand input, please enter command again."
#    break  # TODO
      # Make more useful error messages

while True:
  mainMenu()

