# Further Exercises

The following exercises should be used if you are looking for some tougher challenges beyond those included in the chapter exercises. You should however first ensure you have worked through the main exercises included in each chapter are comfortable with all the techniques introduced before tackling those listed here.

The exercises below can be solved in a variety of ways. Tackle them in any order you wish. Each will require a mixture of the techniques introduced through the workshops so far (selection, loops, arrays, functions etc). As new techniques are introduced you might think of ways to improve your original solutions, so go back and iterate on your solutions accordingly.  

&nbsp;
&nbsp;

## Number Guessing Game

Create a number guessing game where the user must guess what the number is between 1-100. The game should allow the user to keep guessing until they get it right. After each guess the game should provide feedback informing the user how far away their guess is.

&nbsp;
&nbsp;

#### Extension Problems:

* Implement a scoring system based on the number of guesses the user takes to get the answer right
* Rank this scoring system so the user gets a grade or stars e.g. 1-3 guesses = A, 5-7 guesses = B etc..
* Set the original number randomly
* Implement different modes (e.g. easy and hard), For example in easy mode the game provides feedback on how far away the guess is, whilst in hard mode no feedback is provided.

&nbsp;
&nbsp;

## Quiz

Create a quiz program with at least 10 questions. The choice of questions are up to you (e.g. Capital Cities, Football Teams, Music Artists). The following are a list of desirable features:

* Scoring system
* Record of right and wrong answers
* Random ordering of questions on each play
* Replay functionality without exiting the program

&nbsp;
&nbsp;

## Rock, Paper, Scissors

Write a program to play rock, paper, scissors against the computer. The game should be best of five goes.

#### Extension problem

* Revise the program so the player has the option of playing against the computer or against a second player.

&nbsp;
&nbsp;

## Tic Tac Toe

Write a program to play tic, tac, toe (naughts and crosses) against the computer. The game should be best of five goes.

#### Extension problem

* Revise the program so the player has the option of playing against the computer or against a second player.

&nbsp;
&nbsp;

## WarBots

Concept: In the far future, humanity uses robots to settle wars. These are called warbots. You are to build and test a program to help build the ultimate warbot.

Each bot has the following characteristics.

* Name
* Aim: which is the percentage chance of hitting between 0- 60%
* Strength: Which is the range of damage that it inflicts if it hits. This is between 1-10 points
* Armour: between 0-60%, this is the chance of a successful hit being deflected and causing no damage.
* Hits to kill: is the number of hits to kill the warbot.
* Dexterity: no maximum

The programme must allow the values of each warbot to be entered via the keyboard. Each robot has 20 points to allocate. The rules for building are:
* Aim: costs 1 construction point per 10% (maximum of 60%)
* Strength: 1 point per strength point (1-10 points)
* Armour: costs 1 construction point per 10% (maximum of 60%)
* Hits to kill: 1 construction point per 2 hits
* Dexterity: costs 1 construction point per point (no maximum)

The two warbots fight. The fight should have the following actions

* The one with the highest dexterity attacks first, if the dexterity is the same, then it is random which one attacks first.
* The attacking robot should determine if it hits by generating a random number e.g. if the aim is 50%, then it hits 50% of the time.
* The defending robot the rolls to see if its armour deflects the attack, leading to no damage.
* If the defending robot hits, deduct the strength of the attacking robot from the hits to kill of the defender.
* The defending robot now attacks.
* This carries on until the one of the robots is killed.

#### Extension problem

Ensure the program makes use of functions and OOP techniques

&nbsp;
&nbsp;

## Professor Scott and the Temple of Doom

A text based adventure game.

The party led by well-known explorer Professor Scott (and his faithful companions) is facing his most complex challenge yet. He is attempting to retrieve the Crystal Skulls for the infamous Temple of Doom. Obviously, the Temple is protected by monsters and traps. The party should start outside the Temple.

Each time someone is killed, one of the faithful companions should be removed first. Professor Scott is the last one to be killed and if he dies, then the adventure is over.

All probabilities should be shown on the screen e.g:

*“You enter the cave and there is a spike trap. It stands 40% of working." You roll 39%. Oh dear, 1 of your party is killed. What do you wish to do next?”*

### Game Rules

Each room entered should state the name of the room and any items/ monsters/ traps in it.

Player commands include N (move north), S (move south), W (move west) E (move east), A (attack), F (flee), P item name (e.g. P torch), I (inventory- a list of the what the party is carrying).

The temple should consist of a maximum of 30 rooms/ corridors/ other locations. Items can include treasure, torch, weapon etc…

Any room with a trap only activates once (i.e. if you return to the room, nothing happens).

A monster(s) can attack anyone in the room until the monster is dead or the party flees. The chance of trap working or a monster successfully attacking (and killing one of the party) should be random e.g. a pit trap stands a 40% chance of killing someone if the part does not have a torch, 20% if they do.

#### Extension Problem

* The contents of each room should be read from a file. The player should have the option to save the game during play
* The program should implement functions and OOP techniques
