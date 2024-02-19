/*
Seven Stars, Seven Lines
Write a program that uses nested for loops to print the following pattern to the console

*******
*******
*******
*******
*******
*******
*******
*/

#include  <iostream>
using namespace std;

int main (){
    //Title
    cout << ("Seven stars, seven lines!!!!") << endl << endl;
    //int NumberOfStars = 0;
       for (int i=0; i<7; i++){ // run the loop 7 times
       for (int NumberOfStars = 0;NumberOfStars <7; NumberOfStars++){ // If number of stars is less then 7 then print text. Then add one to the variable. 
            //After reaching even the program will stop. 
            cout << ("*");
            //Print * to the program. as it will run 7 times per time. It will add 7 * in each line. 
    }
        cout << endl;
        //Print to the screen.

    }
    return 0;
}