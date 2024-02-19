/*
Consider the following list of vehicles: “Car”, “Train”, “Tractor”, “Skiff”, “Tank”. 
Declare and initialise an array called vehicles 
using these values then complete the following tasks:

    Print index 3 to console
    Print index 0 to console
    Print “Tractor Tank” to console using array indexes
    Print “Car Skiff Train” to console using array indexes
*/
#include <iostream>
using namespace std;
int main(){
    string vehicle[5] = {"Car",  "Train", "Tractor", "Skiff", "Tank"};

    //Print the index 3. It starts at 0 and go up. So car = 0; Meaning it will count one up.
    //Leaving Skiff being the answer. :)
    cout << "Index 3: " << endl;
    cout << vehicle[3] << endl; // This will look up what the value is for 3 in vehicles variable. In 
    //Our case the answer is Skiff. 0, 1,2,3.
    cout << "Index 0: " << endl;
    cout << vehicle[0] << endl;
    cout << "Index for Tractor Tank:" << endl;
    cout << vehicle[2] << " " << vehicle[4] << endl;
    cout << "Index for Car Skiff Train: " << endl;
    cout << vehicle[0] << " " << vehicle[3] << " " << vehicle[1] << endl;
    return 0;
}