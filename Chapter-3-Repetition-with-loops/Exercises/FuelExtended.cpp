/*
Complete the fuel exercise from Chapter 2 ensuring you have used a switch statement 
and feel free to add other fuel types!

Now extend the program to use a do-while loop that keeps the program running until
 the user enters a valid fuel type and asks for an appropriate amount of fuel.
*/

#include <iostream>
using namespace std;
int main (){
    char UserInput;
    double PetrolLitreCost = 1.17;
    double DieselLitreCost = 1.34;
    double Litre;
//It will keep asking for the fuel type. Once you do it correctly, you should be able to enter your ammout of fuel. 
    cout << ("automatic fuel filling service!") << endl;
    cout << ("Please enter (P) for Pertrol and for Diesel press (D): ") << endl;
    do {
    cin >> UserInput;
    
    switch (UserInput)
    {
        case 'P':{

        }

        case 'p':{

            cout << "Please enter how much litres you want:" << endl;
            cin >> Litre;
            double LitreCalc = Litre * PetrolLitreCost;

            cout << "Cost per litre is 1.17." << endl;
            cout << "You are paying for " << Litre << " litres."<< endl << "The cost is: " << "£ " << LitreCalc << endl <<  endl;
            return 0;
            break;
        }
        case 'D':{
            
        }
        case 'd':{
            cout << "Please enter how much litres you want:" << endl;
            cin >> Litre;
            double LitreCalc = Litre * DieselLitreCost;
            cout << "Cost per litre is 1.34." << endl;
            cout << "You are paying for " << Litre << " litres."<< endl << "The cost is: " << "£ " << LitreCalc << endl << endl;
            return 0;
            break;
        }
        default:{
            cout << "Error please select Petrol (P) or Diesel (D)..." << endl;

        }}} while (UserInput != 'P' || UserInput != 'p' || UserInput != 'D' || UserInput != 'd');
        }; //Those will keep the program running.


