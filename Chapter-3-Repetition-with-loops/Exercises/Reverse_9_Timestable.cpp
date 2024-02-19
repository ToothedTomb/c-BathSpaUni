/*
Write a while loop that prints to console all the values of the 9 times t
able from 108 down to 9.

Expected result:
108
99
90
81
72
63
54
45
36
27
18
9

Use the starter code below to complete this exercise, filling in the gaps to complete
 the solution

#include <iostream>
using namespace std;

int main(){
    int num = 108; //declare and initalise variable

    while(______){ //while conditional check
        //code to output then decrease number
        __________________________________
        _____________
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int main (){
    int num = 108; // Variable need called
    int Number = 0;
    cout << ("Here is the nine times tables. ") << endl; //Ttitle  
    while (num >= 9){   
        cout << num << endl; 
        num -= 9 ; // Subtract nine everytime 
        
    }


         // Go backwards not forward.
         return 0;
    }
    
