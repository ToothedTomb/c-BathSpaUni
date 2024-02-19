#include <iostream>

using namespace std;
int main() {
    int UsbStrickPrice = 6;
    int MoneySheHas = 50;
    int HowMuchUSB = MoneySheHas / UsbStrickPrice;
    int HowMuchIsLeft = MoneySheHas % UsbStrickPrice; // % is used to work out the reminder.
    //For example you got 5 / 2. You would get 2 as that is the reminder. 1.2 is the answer. 
    cout << ("The price of the USB strick for one: ") << ("£") << UsbStrickPrice << endl;
    cout << ("Ammount of money she have: ") <<("£") << MoneySheHas << endl;
    cout << ("How much USB sticks can she buy? ") << HowMuchUSB << " USB sticks"<< endl;
    cout << ("How much money does she have left over? ") <<("£") << HowMuchIsLeft << endl;
    //I like to keep it to look professional. :)
    return 0;
}

/*
We will work out the reminder in order to calculate the amount of
money she whas left over.
Amazing website:
https://www.programiz.com/cpp-programming/examples/quotient-remainder
*/