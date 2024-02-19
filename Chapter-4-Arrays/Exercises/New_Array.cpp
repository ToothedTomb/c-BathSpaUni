/*
Write a program which takes two arrays of 10 integers each, 
called a and b. c is an array with 20 integers. The program should put into c 
the result of appending b onto the end of a, so the first 10 integers of c are from array a, 
the latter 10 are from b. Then the program should print array c.

*/
#include <iostream>
using namespace std;
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {11,12,13,14,15,16,17,18,19,20};
    int c[20];
    for (int i =0; i<= a[i]; i++){
            c[i] = a[i]; // Adding the data from array a to c.
        }
    int r = 10; // R will move onto the second array. Which is located at 10.
    for (int i = 0; i<=b[i]; i++){
        c[r] = b[i]; // Adding the data from array b to c.
            r++; // Will go up until the end of the loop.

    }
    cout << ("Content in Array C: ") << endl;
    for (int i = 0; i<=c[i]; i++){
    cout << c[i] << " "; // Display the data in array c. 
    }
    return 0; 

         
    }

