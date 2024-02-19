/*
Write a function that
 returns the highest odd number from a given array. 
 The array is 11, 2, 6, 15, 12, 13, 9
*/
#include <iostream>
using namespace std;
int HighestOddNumber(int Array[7]){ // This will check if the number is odd.
    int highestOdd =0;
    
    for (int x = 0; x < 7; x++){
        if (Array[x]% 2 != 0 && Array[x] > highestOdd){ //If array is odd and bigger than the prevoius bigger one then it will become the highest.
            highestOdd = Array[x];
        }
    }
    cout << "The highest Odd Number is: " << highestOdd << endl; // Print out the highest odd number.
    return 0;
}
int main(){
    int MyArray[7] = {11, 2, 6, 15, 12, 13, 9}; // The created array.
    int answer = HighestOddNumber(MyArray);  // Save the array to the hightestOddNumber function so it can do the calculations. 

}