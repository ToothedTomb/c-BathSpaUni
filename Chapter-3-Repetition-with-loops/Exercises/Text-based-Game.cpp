#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to the dragon slay game! You will go through a series of chambers and must slay the dragon!" << endl;
    cout << "Available controls are:\n1: go up\n2: go down\n3: go left\n4: go right\n0: pick up items\n5: to slay the dragon\n 6: to slay the demon\n7: View your inventory." << endl;
    cout <<"You are in a hallway. There is a door to the left of you." << endl;

    int pickup = 0;
    int up = 1;
    int down = 2;
    int left = 3;
    int right = 4;
    int slay = 5;
    int slay2 =6;
    string inventoryList = "You have the following items:";
    int InventoryListNum = 7;
    int userInput;

    bool firstValidMove = false;
    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == left) {
            cout << "You go left." << endl;
            firstValidMove = true;
        
        }else if (userInput == 7){
            cout << inventoryList << endl << endl;
        
        } else {
            cout << "You can't go that way. Try again." << endl;
        }
    } while (!firstValidMove);

    cout << "You are at a grandiose staircase. There is an ajar armor cabinet with a sword in it. The staircase is blocked going down." << endl;

    bool secondValidMove = false;
    bool hasSword = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == pickup) {
            cout << "You pick up a sword" << endl;
            inventoryList += " sword, ";
            hasSword = true;
        } else if (userInput == up) {
            cout << "You go up." << endl;
            secondValidMove = true;
        }
        else if (userInput == 7){
            cout << inventoryList << endl << endl;
        
        }
        else {
            cout << "You can't do that. Try again." << endl;
        }} while (!secondValidMove);

    cout << "At the top of the staircase your way is blocked by a dragon!!!" << endl;

    bool thirdValidMove = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == slay) {
            if (hasSword == true) {
                cout << "You use your mighty sword and slay the dragon! You open the door behind the dragon and find the castle treasure!" << endl;
                inventoryList += "treasure, ";
            } else {
                cout << "You use your bare hands to slay the dragon but don't succeed! Try the game again. Perhaps pickup a weapon or two?" << endl;
            }
            thirdValidMove = true;
        }
        else if (userInput == 7){
            cout << inventoryList << endl << endl;
        
        }
        else {
            cout << "Quick! Slay the dragon! Use the slay command (press 5)!" << endl;
        }}
     while (!thirdValidMove);

    bool fourthValidMove = false;

    cout << "You may have the treasure but that's not the end, you hear the screams of the princess in the dungeon " << endl;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == down) {
            cout << "You head down the stairs quickly, on your way you pick carefully pick up a bottle of poison" << endl;
            inventoryList += "poison, ";
            fourthValidMove = true;
        }
        else if (userInput == 7){
            cout << inventoryList << endl << endl;
        
        }
        else {
            cout << "You can't do that! Try again." << endl;
        }}
     while (!fourthValidMove);

    cout << endl << endl;
    cout << "You start to run toward the scream in the chamber, you found the princess but she is stuck in a black crystal." << endl;
    cout << "In order to destroy the crystal, you need to kill the demon." << endl << "The demon found you and said 'Oh I see you found the princess, in order to free her, you must fight me and win! But I always win!!!' " << endl;
    bool fivethValidMove = true;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == slay) {
            cout << "Quick! Slay the demon! Use the slay command (press 5)!" << endl;
            cin >> userInput;
            if (hasSword == true) {
                cout << "You use your mighty sword and slay the demon! You have saved the princess. But the demon drops a teleporter wrist watch. Do you pick it up?" << endl;
                cin >> userInput;
            if (userInput == 0){
                inventoryList += " Teleporter, ";
                cout << "You have teleported to a lava lake and you die with the princess. Try again." << endl;
                return 0;
            }   
            else{
                cout << "You found a door and picked up a key from the demon!" << endl;
                cout << "So you use the key to open the door and you and the princess is now safe. The end!" << endl;
            }
            }
            bool fivethValidMove = true;
        }
        else if (userInput == 7){
            cout << inventoryList << endl << endl;
        
        }
 
        } while (!fivethValidMove);
        return 0;
        }

    //bool fourthValidMove = false;
    


//    return 0;

