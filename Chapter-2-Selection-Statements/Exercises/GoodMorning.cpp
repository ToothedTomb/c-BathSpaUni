#include <iostream>
using namespace std;

int main() {
    double CurrentTime = 21; //declare and initialise variable for time
    if(CurrentTime < 12){ //check if 'currentTime' is greater than 12
        cout << "Good Morning" << endl; //output PM message
    }
    else if (CurrentTime < 18){ //else 'currentTime' must be less than 12
        cout << "Good Afternoon" << endl; //output AM message
    }
    else if (CurrentTime < 21){
        cout << "Good Evening" << endl;
    }
    else if (CurrentTime <= 24){
        cout << "Good Night" << endl;
    }
    else {
        cout << "Time not Valid" << endl;
    }
    return 0;
}