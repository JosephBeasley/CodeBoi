#! /usr/bin/env python3
import random

def main_Menu():
   looper = True
   gameNumber = 0
   play = str(input("Do you want to play a game?\t"))
   play = play.lower()
   if ((play == 'yes') or (play == 'y')):
       gameNumber += 1
       name = str(input("What name would you like to go by?\n"))
       while looper == True:
           userChoice = getChoice() #int
           npcChoice = npc_choice() #int
           game = compare_choices(npcChoice, userChoice)
           FileOut(game, name, gameNumber)
           play_again = str(input("Do you want to play again\t"))
           play_again.lower()
           if play_again == 'yes' or play_again == 'y':
               gameNumber+=1
           else:
               if gameNumber > 0:
                   FileIn(name)
               looper = False
               quit()
   else:
       print("Cya")
       quit()


def getChoice():
   Int_userChoice = 0
   userChoice = ''

   while True:
       userChoice = str(input("Choose:\n[1]Rock\n[2]Paper\n[3]Scissors\n> "))
       userChoice = userChoice.lower()

       if userChoice == "1" or userChoice == "rock":
           Int_userChoice = 1
           break

       elif userChoice == "2" or userChoice == "paper":
           Int_userChoice = 2
           break

       elif userChoice == "3" or userChoice == "scissors":
           Int_userChoice = 3
           break

       else:
           print("Invalid input, try again.\n")

   return Int_userChoice


def npc_choice():
   r = random.SystemRandom()
   npc = r.randint(1, 3)
   return npc


def compare_choices(npcChoice, userChoice):
   #rock logic
   result = ''
   if userChoice == 1:
       if npcChoice == 1:
           result = 'Draw'
       elif npcChoice == 2:
           result = 'Loss'
       else:
           result = 'Victory!'
   #paper logic
   elif userChoice == 2:
       if npcChoice == 1:
           result = 'Victory!'
       elif npcChoice == 2:
           result = 'Draw'
       else:
           result = 'Loss'
   #scissors logic
   elif userChoice == 3:
       if npcChoice == 1:
           result = 'Loss'
       elif npcChoice == 2:
           result = 'Victory!'
       else:
           result = 'Draw'

   return result


def actual_game(name):
   #get that game number from some function elsewhere
   while True:
       print("***Game Number: (game num)***")
       print("1 for Rock, 2 for Paper, 3 for Scissors")
       usrChoice = input("---> ")
       try:
           usrChoice = int(usrChoice)
           pass
           #continue into game stuff
       except ValueError:
           print("Hey pick one of those options...")


def FileOut(Result, Name, gameNumber):
   with open(Name + ".txt", "a") as f:
       String = "The result of game #" + str(gameNumber) + " is " + Result + "\n"
       f.write(String)
   print(String)



def FileIn(Name):
   conditions = []
   with open(Name + ".txt", "r") as f:
       for line in f:
           strInput = line.split()
           conditions.append(strInput[6])
   wins = conditions.count("Victory!")
   losses = conditions.count("Loss")
   draws = conditions.count("Draw")
   games = len(conditions)

   returnString = "Games - %d\nWins - %d\nLosses - %d\nDraws - %d\n" % (games, wins, losses, draws)
   print(returnString)


main_Menu()