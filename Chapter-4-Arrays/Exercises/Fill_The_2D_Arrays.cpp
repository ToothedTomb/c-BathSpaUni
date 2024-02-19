/*
Fill the 2D Arrays
Declare - but don’t initialise - another 2D array to hold another 5 x 3 table. 
Fill the arrays using a nested for loop. You should use sizeof() in the loop conditions.

*/

/*
Output example = 
1 2 3 
2 3 4 
3 4 5 
4 5 6 
https://www.w3schools.com/cpp/cpp_arrays_multi.asp
*/
#include <iostream>
using namespace std;
int main(){
    int Numbers2DArray[5][3];
    //This will just do all the calculations. 
    for (int i = 1; i < 5; i++){ // If i is less then 5 (row) do the statement below. If it meets the number then it will stop the loop
        for (int e = 0; e < 3; e++){ // If the e is less then 3 (column) then do the action below.
        Numbers2DArray[i][e]= i * 1 + e;
        }
    }
    for (int i = 1; i <5; i++){
        for (int e = 0; e < 3; e++){ 
            cout <<  Numbers2DArray[i][e] << " ";
        }   
        cout << endl;
    }
    return 0; 
    
}