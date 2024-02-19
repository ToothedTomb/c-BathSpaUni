#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cout << ("Array Practice!!") << endl << endl;
    int Start = 0;
    cout << ("The full alphabet:") << endl;
    string English [26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    for (int i = 0; i<=25; i++){
        cout << English[i];
    }
cout << endl << endl;
cout << "The half of the alphabet: " << endl;
    for (int i = 0;  i<= 12; i++){
        cout << English[i];
    }
    cout << endl << endl;
 /*Uses a for loop to print all the elements of the following array in 
    reverse order 1, 3, 5, 7, 9.*/
    cout << "Numbers in reverse order:" << endl;
    int reverse [5] = {1,3,5,7,9};

    for (int i = 4; i>=0; i--){
        cout << reverse[i];
    }
 cout << endl << endl;
 /*
     Declares the following array of integers 10, 15, 25, 35, 50, 75 and uses a for loop and 
    some maths to 
    calculate the average of these values.*/
    cout << "Work out the average:" << endl;
    int NumberListbox [6] = {10, 15, 25, 35, 50, 75};
    int average = 0;
    for (int i = 0; i<=5; i++){
        cout << NumberListbox[i] << " ";
        average += NumberListbox[i];
    }
    cout << endl;
    cout << "The average number is: "<< average /6 << endl << endl;
    cout << endl << endl;
    /*
        Prints out the highest and lowest value from the following integer array values: 
    10, 88, 4, 21, 345, 99, 17*/
    int HigherNum [7]= {10, 88, 4, 21, 345, 99, 17};
    int i;
    cout << "Numbers from the higest to lower value!!!" << endl;
    sort(HigherNum, HigherNum + 7, greater<int>()); // Will sort the data from bigger into smaller. 
    for (int i = 0; i<7; i++){
        cout << HigherNum[i] << " ";
    }
    //cout << HigherNum[i] << " ";
    cout << endl << endl; 
    /*
    Assigns all numbers between 0 and 100 to an array using a for loop. 
    Then using another for loop, iterates through the array and print only the odd numbers.
    */
   cout << "Counting from 0 -100! " << endl;
   int Begin = 0;
   int Finish = 100;
   int pro [101]; //101 is 100 bec is starts at 0. :)
   for (int i = Begin; i <= Finish; i++){
    pro[i] = i;
    cout << pro[i] << " ";
    }
    cout << endl<< endl;
    cout << "Odd numbers from 0 -100!" << endl;
    for (int i = 0; i <=Finish; i++){
    if (pro[i] % 2 !=0){
        cout << pro[i] << " ";
    }
   }
   
   cout << endl << endl;
    
    return 0;
}
//

//Find number from high to low: https://onecompiler.com/posts/3vrjfrjwz/c-program-to-find-largest-number-of-an-array
//More info on sort command: https://www.digitalocean.com/community/tutorials/sort-in-c-plus-plus