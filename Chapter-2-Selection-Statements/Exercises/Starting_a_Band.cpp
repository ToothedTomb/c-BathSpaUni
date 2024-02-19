/*
START
    declare required variables
    IF(have musical friend)
          //this IF is nested inside the first
          IF(friend plays guitar OR drums)
              output can play message                  
          ELSE
              output can't play message
          ENDIF
    ELSE
        output can't play message
    ENDIF
END
*/

#include <iostream>

using namespace std;
int main (){
    bool musicalFriend = true;
    string friendPlays = "guitar";
    if (musicalFriend == true){
        //Nested if statements allows for an if statement to also have an if statement example below. 
        if (friendPlays == "guitar" || friendPlays == "drums"){  
            cout << ("Can play in the band!") << endl;
        }
        else{
            cout << ("Can't play in the band!") << endl;
        }}
    else{
        cout << ("Can't play in the band!") << endl;
    }
    return 0;
        }

