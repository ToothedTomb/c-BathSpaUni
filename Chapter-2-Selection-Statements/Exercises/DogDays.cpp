/*
It is commonly said that one human year is equivalent to 7 dog years. 
However this simple conversion fails to recognise that dogs reach adulthood in approximately two years.
 As a result, some people believe that it is better to count each of the 
 
 first two human years as 10.5 dog years, and then count each additional human year as 4 dog years.

Write a program that implements the conversion from human years to dog years described 
in the previous paragraph. Ensure that your program works correctly for conversions of 
less than two human years and for conversions of two or more human years. 
Your program should display an appropriate error message if the user enters a negative number.
*/
#include <iostream>

using namespace std;

int main(){
    double human_Years;
    double Dog_Years;
    double FirstTwoYears = 10.5;
    //This is the title. 
    cout << ("-------------------Human years to dog years calculator!------------------") << endl;
    cout << ("Please enter the human year:") << endl;
    cin >> human_Years;
    if (human_Years == 1){
        //This is done to find out what the first year is for the dog years.
        double FirstYear = FirstTwoYears / 2;
        cout << ("Human year to dog years is ") << FirstYear << "." << endl;
    }
    else if (human_Years == 2){
        cout << ("Human year to dog years is ") << FirstTwoYears << "." << endl;
    }
    else if (human_Years > 2){

        double Calc = FirstTwoYears + (human_Years*4);
        //I have done times human year to four then added the first year to it. 
        //So if there was 3 human years. 
        //The answer would be 10.5 + (3 *4) = 22.5 years old...
        cout  << ("Human years to dog years is ") << Calc << "." << endl;
    }
    else {
        cout << ("There has been an Error. Please try again.") << endl;
    }
    return 0;
}