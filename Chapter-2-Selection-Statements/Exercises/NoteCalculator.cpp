/*
Write a program that calculates the minimum number of notes required for a given amount of money. 
Available notes are 500, 100, 50, 20, 10, 5, 2, & 1.

The program should ask the user to enter the amount, then calculate the number of notes. For example:
Input
Input amount: 575
Output
Total number of notes
500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
2: 0
1: 0
*/

#include <iostream>

using namespace std;

int main(){
    int Your_Money;
    //This is all of the money.
    int x500, x100, x50,x20,x10,x5,x2,x1;
    cout << ("Note calculator!") << endl;
    cout << ("Please enter amount: ") << endl;
    cin >> Your_Money;
    if (Your_Money >= 500){
        x500 = Your_Money/500;
        Your_Money -= x500 * 500;
    }
    if (Your_Money >= 100){
        x100 = Your_Money/100;
        Your_Money -= x100 * 100;
    }
    if (Your_Money >= 50){
        x50 = Your_Money/50;
        Your_Money -= x50 * 50;
    }
    if (Your_Money >= 20){
        x20 = Your_Money/20;
        Your_Money -= x20 * 20;
    } 
    if (Your_Money >= 10){
        x10 = Your_Money/10;
        Your_Money -=x10 *10;
    }
    if (Your_Money >= 5){
        x5 = Your_Money /5;
        Your_Money -= x5 * 5;
    }
    if (Your_Money >=2){
        x2 = Your_Money/2;
        Your_Money -= x2 * 2;
    }
    if (Your_Money >= 1){
        x1 = Your_Money /1;
        Your_Money -= x1 *1;
    }
    cout << endl;
    cout << ("500: ") << x500 << endl;
    cout << ("100: ") << x100 << endl;
    cout << ("50: ") << x50 << endl;
    cout << ("20: ") << x20 << endl;
    cout << ("10: ") << x10 << endl;
    cout << ("5: ") << x5 << endl;
    cout << ("2: ") << x2 << endl;
    cout << ("1: ") << x1 << endl;
    return 0;
}
//reference:
// https://www.tutorjoes.in/Java_example_programs/count_total_number_of_notes_in_java
// This is java so it wont work but it gave help on solving the problem. 