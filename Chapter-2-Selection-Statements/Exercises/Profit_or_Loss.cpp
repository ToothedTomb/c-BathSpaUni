/*
Write a program to calculate profit or loss. The program should ask the user for the purchase price
 and sale price then calculate whether profit or loss was made on the sale. For example:

    Purchase Price: £1250
    Sale Price: £1000
    Loss = £250
*/
#include <iostream>

using namespace std;

int main (){ // need main or our program will not run. 
    double Purchase_Price;
    double Sale_Price;
    double Loss;
    double Profit;

    cout  << ("-----------------Calculate the profit or Loss!--------------------") << endl;
    cout << ("Please enter the purchase price: ") << endl;
    cin >> Purchase_Price;
    cout << ("PLease enter the sale price: ") << endl;
    cin >> Sale_Price;
    cout << endl;
    cout << ("Purchase Price: ") << ("£") <<  Purchase_Price << endl;
    cout << ("Sale Price: ") << ("£") << Sale_Price << endl;
   
    //This is how you work out the loss of money. You need to do the purchase price and subtract it from sale price. 
    if (Purchase_Price >Sale_Price){
        double Loss = Purchase_Price - Sale_Price;
        cout << ("Loss = ") <<("£") <<  Loss << endl;
    }
    else if (Purchase_Price == Sale_Price){
        cout << ("It's the same price: ") <<("£") << Purchase_Price << endl;
    }
    else if (Purchase_Price < Sale_Price){
        Profit = Sale_Price - Purchase_Price;
        cout << ("Profit = ") << ("£") << Profit << endl;
    }

    else {
        cout << ("Failed to calculte the Loss or profit!") << endl;
    }
}