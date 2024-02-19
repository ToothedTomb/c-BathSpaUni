/*
Write a program to find the number and sum of all integers between 100 and 200 which are divisible by 9. 
Only a single for loop is required for this exercise.
*/

#include <iostream>
using namespace std;
int main(){
    int counter = 300;
    int totalNumber = 0;
    int num1 = 100;
    for (counter; counter > num1; counter--){
        num1+= 1;
        if (num1 % 9 == 0){ // If it divide by nine then it will print out the number then it will save it to total numbers.
            cout << num1 << endl;
            totalNumber += num1;
        }

    }
    cout << endl;
    cout << ("The total sum is: ") << totalNumber << endl; //Total will add all the numbers that divde by nine.
    return 0;
}
