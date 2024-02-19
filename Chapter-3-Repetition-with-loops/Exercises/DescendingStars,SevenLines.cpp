/*
Write a program that uses nested for loops to print the following pattern to the console

*******
******
*****
****
***
**
*




*/

#include <iostream>
using namespace std;
int main (){
    cout << ("Descending Stars!!!") << endl;
    for (int x=1; x<= 7; x++){ // The outerloop will run first and then will run the next part 7 times.
        for (int Stars=x; Stars <=7; Stars++){ //This will run 7 times but the otherloop will follow this section only 7 times.
            cout << ("*") ;
        }
        cout << endl;
    }
    return 0;
}