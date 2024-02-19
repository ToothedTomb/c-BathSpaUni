/*
Use a multidimensional string array that will store the names and respective postcodes 
of 3 or more people. Once you have declared the array ask the user to enter the 
required data then print out the details of each person to the console, e.g.
Name 	Postcode
Bob 	A59 1LK
*/

#include <iostream>
#include <string>
using namespace std;
int main (){
    string Name;
    string Postcode;
    string NamesPostPostcode[3][1]; //This will create the 2d aray. 3 as its row and 1 as its column. 
    cout << "Address storage!!! " << endl << endl;
    for (int i = 0; i < 3; i++){  //If I reach 3 and the user got all the data. Then it can move on otherwise loop again. 
        for (int z = 0; z <1; z++){ 
            cout << ("Please enter name: ") << endl;
            cin >> Name ;
            cout << ("Please enter Postcode: ") << endl;
            cin >> Postcode;
            NamesPostPostcode[i][z] = {Name+ "   " + Postcode}; //Will write the name to the array as well as the Postcode.
            cout << endl; 

        }
        
    }
    cout << endl;
    cout << "Name: " << "Postcode: " << endl;
        for (int i = 0; i < 3; i++){
        for (int z = 0; z <1;z++){
            cout << NamesPostPostcode[i][z] << " "; // Display the name and the Postcodees. 
            //cout <<NamesPostPostcode[i][z] << " ";
            cout << endl;
        }
    }
    return 0;
}