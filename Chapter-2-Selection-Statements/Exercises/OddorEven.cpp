#include <iostream>
using namespace std;

int main(){
  int YourNumber; // Integer as its a number.
  //title
  cout << ("---------------------------------Odd or Even Numbers---------------------------------") << endl;
  cout << ("Please enter your number:") << endl;
  cin >> YourNumber;

  //This will be the if statement that will check if the number is odd or even.
  if (YourNumber % 2 == 0){
    cout << YourNumber << " is even." << endl;
  }
  else{
    cout << YourNumber << " is odd." << endl;
  }
  return 0;
}
/*
What does % mean?
The remainder from a division. */