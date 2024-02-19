#include <iostream>
using namespace std;

void hello(){ // This will not run automaticly but will run when the main function ask for it. 
  cout << "Hello" << endl; // This when called will print "Hello".
}

int main(){

  hello(); // Call the function hello. This will print hello EASY! 

  return 0;
}