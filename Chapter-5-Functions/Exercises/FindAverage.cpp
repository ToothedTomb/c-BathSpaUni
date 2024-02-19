/*
Write a function that finds the average of three doubles. 
You will need to pass three doubles into your function, 
which should sum them and then divide the total by 3.
*/
#include <iostream>
using namespace std;
int AverageFunc(int num1, int num2, int num3){ // This function has the calculation for finding the average number. 
    int addition = num1 + num2 + num3;
    int average = addition /3;
    return(average);

}
int main(){
    int num1;
    int num2;
    int num3;
    int average;
    cout << "Find the average number: " << endl;
    cout << "Please enter the first number:" << endl;
    cin >> num1;
    cout << "Please enter the second number:" << endl;
    cin >> num2;
    cout << "Please enter the third number:" << endl;
    cin >> num3;
    average = AverageFunc(num1,num2,num3); // Calls in function set each interger to the values the user entered. 
    cout << "The average number is " << average << endl; //Display the average number
    return 0; 
}