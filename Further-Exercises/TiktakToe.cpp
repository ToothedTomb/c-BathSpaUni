/*
Create a tiktaktoe game...
*/
#include <iostream>

using namespace std;
int main(){
bool GameOver = false;

    cout << "Please enter number from 1 - 9: " << endl;
    int Num = 10;
    string MoveBlock[10] = {"1", "2","3","4","5","6","7","8","9"};
    cout << "Please enter a move on the board:" << endl;
    cout << "          |" << "            |" <<  "            |" << endl;
    cout << MoveBlock[0] << "             " <<MoveBlock[1] << "             " << MoveBlock[2] << endl;
    cout << "--------------------------------------------" << endl;
    cout << "          |" << "            |" <<  "            |" << endl; 
    cout << MoveBlock[3] << "              " <<MoveBlock[4] << "             "<< MoveBlock[5] << endl;
    cout << "----------------------------------------------" << endl;
    cout << "          |" << "            |" <<  "            |" << endl;
    cout << MoveBlock[6] << "                " <<MoveBlock[7] << "               " << MoveBlock[8] << endl;

    cout << "----------------------------------------------" << endl;
do {
    //Check if either playerOne wins or PlayerTwo;
    int PlayerOne;

    cout << "Player one turn to play:" << endl;
   
    cin >> PlayerOne;
    int Obs = 10;
do{  if (MoveBlock[PlayerOne - 1] != "P2" && MoveBlock[PlayerOne - 1] != "P1" ) {
        MoveBlock[PlayerOne - 1] = "P1"; 
        
    } 
    else {
        cout << "Position already taken. Please select another position." << endl;
        // Ask Player 1 to input their move again or handle this accordingly.
        cin >> PlayerOne;
        }} while ( MoveBlock[PlayerOne - 1] == "P1" && MoveBlock[PlayerOne - 1] == "P2");
            MoveBlock[PlayerOne - 1] = "P1"; 

        cout << "          |" << "            |" <<  "            |" << endl;
    cout << MoveBlock[0] << "             " <<MoveBlock[1] << "             " << MoveBlock[2] << endl;
    cout << "--------------------------------------------" << endl;
    cout << "          |" << "            |" <<  "            |" << endl; 
    cout << MoveBlock[3] << "              " <<MoveBlock[4] << "             "<< MoveBlock[5] << endl;
    cout << "----------------------------------------------" << endl;
    cout << "          |" << "            |" <<  "            |" << endl;
    cout << MoveBlock[6] << "                " <<MoveBlock[7] << "               " << MoveBlock[8] << endl;

    cout << "----------------------------------------------" << endl;
    if (MoveBlock[0] == "P1" && MoveBlock [1] == "P1" && MoveBlock [2] == "P1"){
        cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[3] == "P1" && MoveBlock[4] == "P1" && MoveBlock[5] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[6] == "P1" && MoveBlock[7] == "P1" && MoveBlock[8] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
        if (MoveBlock[0] == "P1" && MoveBlock [1] == "P1" && MoveBlock [2] == "P1"){
        cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[3] == "P1" && MoveBlock[4] == "P1" && MoveBlock[5] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[6] == "P1" && MoveBlock[7] == "P1" && MoveBlock[8] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;

    }
        if (MoveBlock[1] == "P1" && MoveBlock[4] == "P1" && MoveBlock[7] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
            if (MoveBlock[0] == "P1" && MoveBlock[3] == "P1" && MoveBlock[6] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[2] == "P1" && MoveBlock[5] == "P1" && MoveBlock[8] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[0] == "P1" && MoveBlock[4] == "P1" && MoveBlock[8] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[2] == "P1" && MoveBlock[4] == "P1" && MoveBlock[6] == "P1"){
    cout << "Player one WINS!" << endl; 
        return 0;
    }
    int PlayerTwo;
    cout << "Player two turn to play: " << endl;
    cin >> PlayerTwo;
    Obs = 10;
    do{
        if (MoveBlock[PlayerTwo - 1] != "P2" && MoveBlock[PlayerTwo - 1] != "P1" ) {
        cout << "Test" ; 
        MoveBlock[PlayerTwo - 1] = "P2"; 

    } 
    else {
        cout << "Position already taken. Please select another position." << endl;
        // Ask Player 1 to input their move again or handle this accordingly.
         // Ask Player 2 to input their move again
        cin >> PlayerTwo;

         
        
    }}while (MoveBlock[PlayerTwo - 1] == "P1" && MoveBlock[PlayerTwo - 1] == "P2");
    MoveBlock[PlayerTwo - 1] = "P2"; 


    cout << "          |" << "            |" <<  "            |" << endl;
    cout << MoveBlock[0] << "             " <<MoveBlock[1] << "             " << MoveBlock[2] << endl;
    cout << "--------------------------------------------" << endl;
    cout << "          |" << "            |" <<  "            |" << endl; 
    cout << MoveBlock[3] << "              " <<MoveBlock[4] << "             "<< MoveBlock[5] << endl;
    cout << "----------------------------------------------" << endl;
    cout << "          |" << "            |" <<  "            |" << endl;
    cout << MoveBlock[6] << "                " <<MoveBlock[7] << "               " << MoveBlock[8] << endl;

    cout << "----------------------------------------------" << endl;
        if (MoveBlock[0] == "P2" && MoveBlock [1] == "P2" && MoveBlock [2] == "P2"){
        cout << "Player two WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[3] == "P2" && MoveBlock[4] == "P2" && MoveBlock[5] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[6] == "P2" && MoveBlock[7] == "P2" && MoveBlock[8] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
        if (MoveBlock[0] == "P2" && MoveBlock [1] == "P2" && MoveBlock [2] == "P2"){
        cout << "Player one WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[3] == "P2" && MoveBlock[4] == "P2" && MoveBlock[5] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[6] == "P2" && MoveBlock[7] == "P2" && MoveBlock[8] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;

    }
        if (MoveBlock[1] == "P2" && MoveBlock[4] == "P2" && MoveBlock[7] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
            if (MoveBlock[0] == "P2" && MoveBlock[3] == "P2" && MoveBlock[6] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[2] == "P2" && MoveBlock[5] == "P2" && MoveBlock[8] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[0] == "P2" && MoveBlock[4] == "P2" && MoveBlock[8] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
    if (MoveBlock[2] == "P2" && MoveBlock[4] == "P2" && MoveBlock[6] == "P2"){
    cout << "Player two WINS!" << endl; 
        return 0;
    }
}while (!GameOver);
return 0;
}