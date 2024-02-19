/*Using a for loop, write a programme that prints all values between 20 and 24. 
Then using an if-else statement and the modulus operator, modify your program 
to add the word “odd” or “even” to each value to show if it is odd or even.

Expected Output:

20 - even
21 - odd
22 - even
23 - odd
24 - even
*/
#include <iostream>
using namespace std;
int main(){
//int number = 20;
for (int number = 20; number <= 24; number++){ // Will in the terminal go from 20 - 24.
    if (number % 2== 0 ){ // If the number reminder is 0 then output even
        cout << number << " - " << "even." << endl;
    }
    else  //Or if not even print out odd!!!!
    {
        cout << number << " - " << "Odd." << endl;
    }
}
return 0; // Exit successfully.
}