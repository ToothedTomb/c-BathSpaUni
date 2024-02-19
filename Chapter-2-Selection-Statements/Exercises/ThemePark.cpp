#include <iostream>

using namespace std;

int main (){
    double MetresTall;
    int age;

    cout << ("--------------Theme Park - Find out if you can take the ride! -------------------") << endl;
    cout << ("Please enter your height: ") << endl;
    cin >> MetresTall;
    cout << ("Please enter your age: ") << endl;
    cin >> age;
    if (MetresTall > 0.6 && age >= 5){ // && allows for if both connditions meet it will do the action.
    //If only one meet it will fail. So it need to do both. || this to replace the && if you wanna do OR that means 
    //It only need to meet one of the condition to pass. But we want them to both be true or fail, so we use &&. :)
        cout << "You can go onto the ride!" << endl;
    }
    else{
        cout << "You can't go onto the ride!" << endl << "You must be 5 years old or over and be 0.6 in height to go on the ride." ;
    }
}