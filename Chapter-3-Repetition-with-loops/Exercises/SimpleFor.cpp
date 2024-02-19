/*
Fill in the blanks to complete the following code so the for loop runs and outputs "Hello World" to the console 10 times.

for(int i ___ ; ______; ____){
   ____ << "Hello World" << _____
}
*/
#include <iostream>

using namespace std;

int main()
{
    int Num = 0;
    for (Num = 0; Num <10;Num++){ // Num is zero, so it starts at zero, then if it less then 10 add one to the Num
    //After that print hello world. If it gets to 10, the program will stop.
        cout << ("Hello World") << endl;
    }
    return 0;
}