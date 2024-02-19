/*
A - Starting with the code below, write a program that counts from zero up 
to a user specified number. For example, if the user enters the number 5, 
your program should display the numbers: 0, 1, 2, 3, 4, 5. 
You cannot use an if-statement for this part!

#include <iostream>
using namespace std;
int main() {
    int myInt;
    int counter;

    return 0;
}

B - Now add a loop that starts counting from a number input by the user and 
stops counting at a number input by the user.

C - Add a third loop that uses an if-else statement to count the 
number of even and odd numbers between the first and final value, 
e.g: start = 1 end = 11 Number of even numbers: 5 Number of odd numbers: 6

D - Finally add a loop that counts and displays numbers starting 
from the user's first value to their second value (as before), and 
then count downwards again to the initial value. 
You can only use one while loop for this section of the task.
*/

#include <iostream>
using namespace std;
int main() {
    int myInt;
    int counter;
    int total_even = 0;
    int total_odd = 0; 
    int totalOfAdd;
    cout << ("Counting loop!!!!") << endl;
    
    cout << ("Please enter where you want to start counting: ") << endl;
    cin >> myInt;
    cout << endl;
    cout << ("Please enter where you want to stop counting: ") << endl;
    cin >> counter;
    cout << endl;

        for(myInt; myInt <= counter;  myInt++){
            cout << myInt << endl;
        if (myInt % 2 == 0){
            total_even++;
            }
        else{
            total_odd++;
        }
        if (myInt ==myInt){
        totalOfAdd += myInt;
        }
        }


            
    cout << "The total of even numbers is: " << total_even << endl;
    cout << "The total of Odd numbers is: " << total_odd << endl;
    cout << "Adding the numbers together: " << totalOfAdd << endl;
            //return 0;
    return 0;
}
        //cout << endl;


