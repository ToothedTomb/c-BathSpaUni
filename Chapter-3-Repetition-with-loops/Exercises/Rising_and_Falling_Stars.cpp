/*
Write a program that uses nested for loops to print the following pattern to the console. Note you will need two sets of nested for loops, one after the other, to achieve this pattern.

*
**
***
****
*****
****
***
**
*

*/
#include <iostream>
using namespace std;
int main(){
    //Rising Starts.
for (int r = 4; r>=1; r--){

    for (int NumStars = r; NumStars <= 4; NumStars++){
        cout << ("*");
    }
    cout << endl;
}
    //Descending starts.
for (int e = 1; e<=4;e++){
    for (int NumStarts2 = e; NumStarts2 <=4; NumStarts2++){
        cout << ("*");
    }
    cout << endl;
}
return 0;

}
