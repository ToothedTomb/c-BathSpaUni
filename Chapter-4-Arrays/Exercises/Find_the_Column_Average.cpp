/*
Writes a program to find the 
average value of each column of a 
2D integer array.

Website: 
https://stackoverflow.com/questions/10452572/getting-the-average-min-and-max-of-numbers-in-2d-array
*/
#include <iostream>
using namespace std;
int main(){
    int NumberArray[5][3] = {{2,4,6}, {3,6,9}, {4,8,12}, {5,10,15},{6,12,18}};
    int average =0;
    for (int i = 0; i < 5; i ++){
        for (int s = 0; s < 3; s++){ //Will display all the values in the 2d array.
            cout << NumberArray[i][s] << " ";
            average += NumberArray[i][s]; // Average will just add what ever number to the next number for 3 times. 
        }// for example 2 then next round 4 then 6 final. 2 +4 +6 = 12
        cout << endl; // Will just add a new line for the next row.
    }
        cout << "The average number is: " << average/15 << endl; // To work out the average. You need to add all the numbers then divide by the numbers of values in the equation. 
return 0; // Will just exit. Does nothing in our code but it makes sure it ran without issue.
}