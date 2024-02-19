/*
Write a program that asks the user to enter the lengths of the three sides of a triangle.

Use the triangle inequality to determine if we have a triangle: In mathematics, 
the triangle inequality states that for any triangle, the sum of the lengths of any two 
sides must be greater than or equal to the length of the remaining side (see here)

If valid, have the program correctly classify the type of triangle as either: 
Equilateral, Isosceles or Scalene (see here).
*/
#include <iostream>
using namespace std;
int main(){
    cout << ("-----------------What is this triangle?-----------------") << endl;
    double hypotenuse;
    double opposite;
    double adjacent;
    cout << ("The triangle MUST add up to 180!!!") << endl;
    cout << ("Please enter the Hypotenuse side of the triangle: ") << endl;
    cin >> hypotenuse;
    cout << ("Please enter the Opposite side of the triangle: ") << endl;
    cin >> opposite;
    cout << ("Please enter the Adjacent side of the triangle: ") << endl;
    cin >> adjacent;
    double total = hypotenuse + opposite + adjacent;

//It will need to be added up to 180 or its not a triangle. 
    if (total < 180){
        if ((hypotenuse == opposite) && (opposite == adjacent)){
        cout << ("This is a Equilateral triangle!") << endl;
        }
        else if ((hypotenuse == opposite) || (opposite == adjacent) || (hypotenuse == adjacent)){
     
        cout << ("This is a Isosceles triangle!") << endl;
        }
        else{
            cout << ("This is a Scalene triangle!") << endl;
        }
    }
    //An error if its not up to 180.
    
    else {
        cout << ("Error: The triangle needs to be added up to 180. Cant be higher.") << endl;
    }
}
/*
From the help from:
https://www.cuemath.com/geometry/isosceles-triangles/
*/