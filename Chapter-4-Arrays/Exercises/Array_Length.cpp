/*
Create a program that outputs the size of arrays containing the following values using the sizeof() 
method described in chapter 6.
    1,2,3,4,5,6,7,8
    “Hello”, “Bye”
    ‘A’, ‘B’, ‘C’
*/
#include <iostream>
using namespace std;
int main(){
    int Numbers[8] = {1,2,3,4,5,6,7,8};
    sizeof(Numbers); // Size off is used to display how big data is in the array variable. 
   cout << ("Using Sizeof in CPP:") << endl << endl;
    cout << ("1,2,3,4,5,6,7,8: ") << endl;
    cout << sizeof(Numbers) << endl << endl; // Our answer is 32 bits. Lets try another example, my friend.
   cout << "Hello Bye: " << endl;
    string HelloBye[2] = {"Hello", "Bye"};
    char ABC[3] = {'A','B', 'C'}; 
    //Now its the same...
    cout << sizeof(HelloBye) << endl << endl;
    cout << "A,B,C: " << endl;
    cout << sizeof(ABC) << endl;
    //Char is smaller, so if you only need to use one character to save storage use char. 
    //String is best for text and int is better for numbers as it saves space. 
    return 0; 
}