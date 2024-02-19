/*
Write a function that takes two integer arguments and returns an integer that is the 
product of the two integers. 
(e.g., integer1: 4, Integer2: 5 returns: 20)

*/
#include <iostream>
using namespace std;
int ProductsOfTwo(int num1, int num2){
    cout << endl;
    cout << "Result: " << endl;
    cout << num1 * num2 << endl;
}
int main(){
    int Number1;
    int Number2;
    cout << "Return the product!!!" << endl;
    cout << "Please enter number for product one: " << endl;
    cin >> Number1;
    cout <<"Please enter numbeer for product two: " << endl;
    cin >> Number2;
    int total = ProductsOfTwo(Number1, Number2); 
}