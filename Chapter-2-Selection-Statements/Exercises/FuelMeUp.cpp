/*
Write a program for an automatic fuel filling service. 
The program should ask the user for the fuel type using a char (e.g. ‘p’ for petrol or ‘d’ for diesel) 
and the number of litres needed using an int.
 With this information use a switch statement to display the price of the 
 requested fuel (Petrol costs 1.17 per litre and Diesel costs 1.34 per litre).

The program should be case sensitive to user input, e.g. "P" and "p" are treated equivalently.

Extension Problem

Validate the users input and output appropriate error message if incorrect values are entered 
for fuel type and number of litres.
*/
#include <iostream>
using namespace std;
int main (){
    char UserInput;
    double PetrolLitreCost = 1.17;
    double DieselLitreCost = 1.34;
    double Litre;

    cout << ("automatic fuel filling service!") << endl;
    cout << ("Please enter (P) for Pertrol and for Diesel press (D): ") << endl;
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
            cout << "You are paying for " << Litre << " litres."<< endl << "The cost is: " << "£ " << LitreCalc << endl;
            break;
        }
        case 'D':{

        }
        case 'd':{
            cout << "Please enter how much litres you want:" << endl;
            cin >> Litre;
            double LitreCalc = Litre * DieselLitreCost;
            cout << "Cost per litre is 1.34." << endl;
            cout << "You are paying for " << Litre << " litres."<< endl << "The cost is: " << "£ " << LitreCalc << endl;
            break;
        }
        default:{
            cout << "Error please select Petrol (P) or Diesel (D)..." << endl;
        }
    }
    return 0;
}