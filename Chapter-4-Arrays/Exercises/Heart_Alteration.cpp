/*
Modify the below heart rates example so the for loop condition limit is calculated by the 
array length rather than being “hard coded”. 
Check your solution works by adding or removing values from the array.
Hint: Use the sizeof() method within the conditional check
int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };

for (int i = 0; i < 8; i++){
      cout << heartRates[i] << endl;
}
*/
#include <iostream>
using namespace std;
int main(){
    int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };
    int Size = sizeof(heartRates) / sizeof(heartRates[0]);
    for (int i = 0; i < Size; i++){
      cout << heartRates[i] << endl;
      return 0;
}
}