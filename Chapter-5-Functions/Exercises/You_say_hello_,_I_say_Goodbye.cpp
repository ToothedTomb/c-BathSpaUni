/*
Write a program that contains and invokes two functions. One that outputs a 
welcome message that reads “Welcome to my program” and a
 second that outputs a goodbye message that reads “End of program”.

When completing this exercise first try declaring and defining each function at the same time. 
Then modify the solution so the functions are declared and defined separately.
*/
#include <iostream>
using namespace std;
string WelcomeFunc(string Welcome){
    return(Welcome = "Welcome to my program!");
}
string GoodbyeFunc(string goodbye){
    return (goodbye = "End of program!");
}
int main(){
    string welcome;
    string Goodbye;
    welcome = WelcomeFunc(welcome); //Calling in the function. Setting the welcome variable to welcome to my program....
    cout << welcome << endl;
    Goodbye = GoodbyeFunc(Goodbye); 
    cout << Goodbye << endl;
    return 0;
}