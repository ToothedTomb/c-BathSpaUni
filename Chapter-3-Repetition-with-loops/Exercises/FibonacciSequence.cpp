/*
Watch this video for an explanation of the Fibonacci Sequence: 
https://www.youtube.com/watch?v=U2L2nJl8kaw

In short, any number in the Fibonacci Sequence can be calculated by 
adding up the numbers both one place, and two places before it.

1, 1, 2, 3, 5, 8, 13….

1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
5 + 8 = 13

and so on…

Using a for loop, write a programme that prints all values of t
he Fibonacci Sequence between 1 and 55.

Expected Result:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55
1  2  3  4  5  6   7   8   9  10

*/
#include <iostream>
using namespace std;
int main(){
    
    int num2 = 0;
    int num1 = num2;
    int counter = 0;
    int answer = 1;
        cout << ("Fibonacci Sequence") << endl;
        for(counter; counter<=10;){ // Will keep repeting the loop for 10 times.
            num1 = num2; 
            num2 = answer;
            
            answer = num1 + num2;
            //int num2 = answer; 
              
            cout << num1 << endl;   //  Print out the num1. Which include the answer. 

        
            counter+=1; //Add counter  everytime till it hits 0.
            

        }

}
