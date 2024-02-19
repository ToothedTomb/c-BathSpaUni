/*
    Declare the following arrays making sure you provide the correct data type and array size 
    (you do not need to initialise these arrays with values):
    array of characters with 26 elements
    array of integers with 10 elements
    array of strings with 4 elements
    array of decimal numbers with 18 elements

    Declare and initialise arrays to hold the following information using the longhand method
     of initialisation.

    1,2,3,4,5,6,7,8
    “Hello”, “Bye”
    ‘A’, ‘B’, ‘C’
    1.0, 2.0, 3.0, 4.0, 5.0
    10, 20, 30, 40, 50, 60

    Use the shorthand method to declare and initialise arrays to hold the following information:

    “”, “a”, “aa”, “aaa”
    1,10,100,1000,10000
    true, false, false, true
    5.6, 1.8, 4.34, 7.65

*/
#include <iostream>
using namespace std;
int main(){
    //Longhand version....
    char characters [26];
    int Numbers [10];
    string Words [4];
    double DecimalNumber [18];
    cout << ("Numbers from 1 -8!") << endl;
    Numbers[0] = 1;
    Numbers[1] = 2;
    Numbers[2] = 3;
    Numbers[3] = 4;
    Numbers[4] = 5;
    Numbers[5] = 6;
    Numbers[6] = 7;
    Numbers[7] = 8;
    
    for (int i = 0; Numbers[i] >= i; i++){
        cout << (Numbers[i]) << " ";
    }
    cout << endl;
    Words[0] = "Hello";
    Words[1] = "Bye";
    int WordLimit = 4;
    for (int i = 0; WordLimit >=i; i++){
        cout << (Words[i]) << " ";
    }
    cout << endl;
    //Short hand method......
    //string aaaaa[] = {"", "a", "aa", "aaa"}
    string LetterA[] = {"", "a", "aa", "aaa"};
    int Number2[] = {1,10,100,1000,10000};
    double DecimalNumber2[] ={1.0, 2.0, 3.0, 4.0, 5.0};
    bool TrueORnot[] = {true, false, false, true};
    double Number3[] = {5.6, 1.8, 4.34, 7.65};
    
    int NumberForAAAAAAA = 4;
    for (int i = 0; NumberForAAAAAAA >= i; i++){
        cout << LetterA[i] << " ";
    }
    cout << endl;
    for (int z = 0; Number2[z] >=z; z++){
        cout << Number2[z] << " ";
    }
    cout << endl;
    int NumberForTrue = 4;
    for (int s =0; NumberForTrue >= s; s++){
        cout << TrueORnot[s] << " ";
    }
    cout << endl;
    for (int s = 0; Number3[s]>= s; s++){
        cout << Number3[s] << " ";
    }
    cout << endl; 

}