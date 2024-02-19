/*
You are a freelance calendar maker. Unfortunately, like me, you are useless are remembering how many days there are in each month of the year.

Write a program that uses a switch statement to tell a user how many days there are in a month.

Your cases should test a number corresponding to the months (e.g. 1 = January, 12 = December), and cases should print out how many days there are in a month.
*/
#include <iostream>
using namespace std;

int main(){
    int month;
    cout << ("--------------How many days are in the month?------------------") << endl;
    cout << ("1 = January - 12 = December.") << endl;
    cout << ("Please enter your month number:") << endl;
    cin >> month;

    switch (month){
        case 1: 
        cout << ("The number of days in January is 31!") << endl;
        break;
        case 2:
        cout << ("The number of days in February is  28 days in a common year and 29 days in leap years!") << endl;
        break;
        case 3:
        cout << ("The number of days in March is 31.") << endl;
        break;
        case 4:
        cout << ("The number of days in April is 30.") << endl;
        break;
        case 5:
        cout << ("The number of days in May is 31.") << endl;
        break;
        case 6:
        cout << ("The number of days in June is 30.") << endl;
        break;
        case 7:
        cout << ("The number of days in July is 31.") << endl;
        break;
        case 8:
        cout << ("The number of days in August is 31.") << endl;
        break;
        case 9:
        cout << ("The number of days in September is 30.") << endl;
        break;
        case 10:
        cout << ("The number of days in October is 31.") << endl;
        break;
        case 11:
        cout << ("The number of days in November is 30.") << endl;
        break;
        case 12:
        cout << ("The number of days in December is 31.") << endl;
        break;
        default:
        cout << ("Error - Please enter the month number:") << ("\n ")<< (" 1 = January - 12 = December.") << endl;
    }
    return 0;
//Help from https://www.timeanddate.com/calendar/months/#:~:text=The%20Gregorian%20calendar%20is%20made,28%20and%2031%20days%20long.&text=Each%20month%20has%20either%2028,leap%20years%20366%20days%20long.
    //Was used to find out how many days are in each month. :)
}
