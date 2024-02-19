#include <iostream>
#include <string>
using namespace std;

int main() {
    printf("1) Enter your first name:\n");
    printf("2) Enter your second name:\n");
    printf("3) Enter your hometown:\n");
    printf("4) Enter your age:\n");
    //Printf is used to output text to the screen. I knew it worked but I had an error. You need to add \n to the end of the the text.

    string Firstname; //This is a string as its text
    string hometown;
    string SecondName;
    int age; // This needs to be a number
// Please enter your name. 
    cin  >> Firstname; // Cin is used to get the user input.
    cin >> SecondName;

//Now enter your hometown
    cin >> hometown;
//Now enter your age
    cin >> age;
    if (cin.fail()) return 0; // If the input from the user is not right, exit the program. 
 
    cout << "Your name is: " << Firstname << " " << SecondName << "\n"<< "Your hometown is: " << hometown << "\n" << "Your age is: "<< age <<" years old." << endl; 
    

    return 0;
}
//Try giving the program both your first and second name when asked. What do you notice? Can you provide a fix?
// What happens is that if I do add my second name then it will create it for the hometown.
// So for example. Name = Jon. Hometown = Steadman. But we want Jon Steadman.
// Update one I will try to add in another string and add it next to the first name. 
/*
Try entering a string or letter value when asked to enter your age. What happens? Can you provide a fix?
I got it working with the help from
https://stackoverflow.com/questions/64310193/how-do-you-use-cin-fail-to-validate-a-string-in-c
https://stackoverflow.com/questions/17928865/correct-way-to-use-cin-fail
https://www.unix.com/programming/119506-why-printf-dont-work.html
Now let me explan the code I added from the websites to show my understanding.

cin.fail is used when you wanna add in an action when the user input the wrong data type. 
abort() is used to exit the program. retuern 0 does the same thing.

*/

