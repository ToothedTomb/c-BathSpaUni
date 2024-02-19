/*
https://youtu.be/Vh4krbTnTAA

Declare and initialise a 2D array to hold the following 5 x 3 table and then print
 the values to the console. You should use sizeof() in the loop conditions.
		
2 	4 	6
3 	6 	9
4 	8 	12
5 	10 	15
6 	12 	18
*/

#include <iostream>
using namespace std;

int main (){
    //5 does not contain data as its the ammount of row you will have. So you just type the number for the column. 
    int Numbers[5][3] = {{2,4,6}, {3,6,9}, {4,8,12}, {5,10,15},{6,12,18}}; // List all of the numbers.
    for (int i = 0; i < 5; i++){ // If i is less then 5 (row) do the statement below. If it meets the number then it will stop the loop
        for (int e = 0; e < 3; e++){ // If the e is less then 3 (column) then do the action below.
            cout << Numbers[i][e] << " "; // This will just print out Numbers within the array. I is for the row and e is for the column. :)
         }
        cout << endl;
    }
    return 0; 
    
}