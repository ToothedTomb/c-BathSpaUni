#include <iostream>
using namespace std;

int main() {
    int age; //declare and initialise variable to store age
    cout << ("---------------------Can I Vote?------------------") << endl;
    cout << ("Please enter your age to see if you can vote: ") << endl;
    cin >> age;
    if(age >=18){ //check if age is greater than or equal to 18
        cout << ("I can vote. :)") << endl; //output can vote message
    }else{ //else block if above condition is false (e.g. age under 18)
        cout << ("I can't vote. :(") << endl; //output can vote message
    }
    return 0;
}