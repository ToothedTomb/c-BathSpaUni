#include <iostream>
using namespace std;

int main (){
    //Our code goes here....
    int Grade;

    //int points;
    //Saved as int as it will not need to have a decimal number as it has to be a whole number.
    string Firstname;
    string SecondName;
    //String means text.

    cout << "Please enter your Student Firstname: " << endl;
    cin >> Firstname;
    //Cin will ask the user for the input.
    cout << "Please enter your Student Surname: " << endl;
    cin >> SecondName;
    cout << "Please enter the marks that the Student has achieved: " << endl;
    cin >> Grade;

    cout << ("The student Firstname: ") << Firstname << endl;
    cout << ("The student Surname: ") << SecondName << endl;

    /*switch (Grade < 10){
        case true: 
        cout << "Your student have got a grade of F." << endl;
        default:
        break;
        return 0;

     
    } */
    //The switch can be used to replace if statements.
    /*The code below grade/10 as expession will use the case below from one number and add ten to it to 
    make the computer to make a decision.
    For example case 1 would be 0 to 10 as it starts there. Case 2 follows from case 20 -30. etc.
    You can do so much with the switch statment, look above as an example. Do note it can only 
    take variables that are int and char. 
    */
    switch (Grade/10)
    {
        case 0:
            cout << "Your student have achieved a grade of F." << endl;
        break;
       case 1:
       //Between 0 to 10
            cout << "Your student have achieved a grade of F." << endl;
        break;
        case 2:
        //Between 10 to 20.
            cout << "Your student have achieved a grade of F." << endl;
        break;
        //Between 30 to 40.
        case 3:
            cout << "Your student have achieved a grade of F." << endl;
        break;
        case 4:
        //Between 40 - 50
            cout << "Your student have achieved a grade of E." << endl;
        break;
        case 5:
        //Between 50 - 60
            cout << "Your student have achieved a grade of D." << endl;
        break;
        case 6:
        //Between 60 - 70
            cout << "Your student have achieved a grade of C." << endl;
        break;
        case 7: 
        //Between 70 - 80
            cout << "Your student have achieved a grade of B." << endl;
        break;
        case 8:
        //  Between 80 - 90 
            cout << "Your student have achieved a grade of A." << endl;
        break;
        case 9:
        //Between 90 - 100
            cout  << "Your student have achieved a grade of A." << endl;
        break;
    case 10:
        cout  << "Your student have achieved a grade of A." << endl;
        break;

    default:
        cout << ("Error: Please enter the amount of marks that the student has achieved. ");
        break;
    } 
    //
}
