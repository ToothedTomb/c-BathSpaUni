/*
START
  declare required variables
  OUTPUT "How much money do you have"
  INPUT user inputs money
  IF money >= 25
    OUTPUT "You can buy the game"
    CALCULATE money left after purchase
    OUTPUT "You have " + money + " remaining"
    ELSE
      CALCULATE money needed for the purchase
      OUTPUT "I need to save " + moneyNeeded
  ENDIF
END*/
#include <iostream>
using namespace std;

int main () {
    int cost = 25;
    int YourMoney;
    //Title
    cout << ("-------------Can I afford the game?--------------") << endl;
    cout << ("The game costs £25. Find out if you can afford it.") << endl;
    cout << ("Please enter how much money, you got on your account: ") << endl;
    cin >> YourMoney;
    if (YourMoney >= cost){
        cout << ("You can buy the game. :)") << endl; 
        int money_Left_Over = YourMoney - cost; // Calculation to find out the money that is left after the purchase. 

        cout << ("Money that is left after the purchase: ") << ("£") << money_Left_Over << endl;
    }
    else {
        cout << ("Sorry, you can't buy the game. :(") << endl;
        int moneyNeeded = cost - YourMoney; // This calc will be used to find out how much money the user will need to save up.
        cout << ("I will need to save ") << ("£") << moneyNeeded << (" to buy the game.") << endl;
    }
    cout << ("-------------------------------------------------------------------") << endl;
    return 0;
}