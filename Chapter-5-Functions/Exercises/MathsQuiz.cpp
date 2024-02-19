/*
Math quiz notes
*/
#include <iostream>
#include <time.h> // Will allow me to use the random function. 
using namespace std;
int DecideOperation(){

    static bool seeded = false;
    if (!seeded) {
        srand(static_cast<unsigned int>(time(nullptr)));
        seeded = true;
    }
    
    // Generate a random number (0 or 1) to represent the operation
    int randomNum = rand() % 2;  // Generates a random number 0 or 1
    char operation = (randomNum == 0) ? '+' : '-'; // This is just randomly decide if the number is to be added or subtracted. 

} 
int randomInt(int SelectLevel){
    char operation;
    int answerCorrect;
    int answer;
    int score = 0;
    int attempt = 0;
    if (SelectLevel == 1){
        int answercorrect;
        for(int i = 10; i >=1; i--){
            int attempt = 0;
            srand(static_cast<unsigned int>(time(nullptr)));
            int y = rand() % 9 + 1; //get random number between 1 and 9
            //cout << "Random: " << y << endl; // This will be for the first number.
            //Second Number.

            //srand(time(NULL)); // Set the random seed;
            int x = rand() % 9+1;//Will be between 1 and 9;
            //cout << "Random: " << x << endl;
            //cout << "Testing the for loop." << endl;
            //char total = DecideOperation(operation);
            char total;
            total = DecideOperation();
            cout << "The question is: " << x << " " << total<< " " << y << " = ";
            cin >> answer;
            attempt = 1;
            //attempt = 1;   
            if (total == '+'){
                answerCorrect = x + y;
            
            }
            else{
                answerCorrect = x - y;
            }
            
            if (answer != answerCorrect){
                cout << "Wrong: Try to answer the question again..." << endl;    
                cin >> answer;
                attempt =2;
                }    
            if (answer == answerCorrect){
                cout << "The answer is correct." << endl;
                 if (attempt == 1 ){
                score += 10;
                }
                else if (attempt == 2){
                    score += 5;
                }
            }
            else {
                cout << "The answer is wrong." << endl;
                cout << "The correct answer is: " << answerCorrect;
                cout << endl;
            }
            attempt = 0;
        }

        cout << "The points you gotten are: " << score << " /100" << endl;

}
    else if (SelectLevel == 2){

        int answercorrect;
        for(int i = 10; i >=1; i--){
            int attempt = 0;
            srand(static_cast<unsigned int>(time(nullptr)));
            int y = rand() % 90 + 10; //get random number between 10 and 90
            //cout << "Random: " << y << endl; // This will be for the first number.
            //Second Number.

            //srand(time(NULL)); // Set the random seed;
            int x = rand() % 90+10;//Will be between 1 and 9;
            //cout << "Random: " << x << endl;
            //cout << "Testing the for loop." << endl;
            //char total = DecideOperation(operation);
            char total;
            total = DecideOperation();
            cout << "The question is: " << x << " " << total<< " " << y << " = ";
            cin >> answer; 
            attempt = 1;          

           
            if (total == '+'){
                answerCorrect = x + y;
                if (attempt == 1){
                }
                else if (attempt == 2){
                }
            }
            else{
                answerCorrect = x - y;
            }
        
            if (answer != answerCorrect){
                cout << "Wrong: Try to answer the question again..." << endl;    
                cin >> answer;
                attempt =2;
                }    
            if (answer == answerCorrect){
                cout << "The answer is correct." << endl;
                if (attempt == 1 ){
                score += 10;
                }
                else if (attempt == 2){
                    score += 5;
                }
            }
            else {
                cout << "The answer is wrong." << endl;
                cout << "The correct answer is: " << answerCorrect;
                cout << endl;
            }
            attempt = 0;
        }
        cout << "The points you gotten are: " << score << " /100" << endl;
    }
    else if (SelectLevel == 3){
        int attempt = 0;

         int answercorrect;
        for(int i = 10; i >=1; i--){
            srand(static_cast<unsigned int>(time(nullptr)));
            int y = rand() % 9999 + 1000; //get random number between 10 and 90
            //cout << "Random: " << y << endl; // This will be for the first number.
            //Second Number.

            //srand(time(NULL)); // Set the random seed;
            int x = rand() % 9999+1000;//Will be between 1 and 9;
            //cout << "Random: " << x << endl;
            //cout << "Testing the for loop." << endl;
            //char total = DecideOperation(operation);
            char total;
            total = DecideOperation();
            cout << "The question is: " << x << " " << total<< " " << y << " = ";
            cin >> answer;  
            attempt = 1;         
            if (total == '+'){
                answerCorrect = x + y;
            }
            else{
                answerCorrect = x - y;
            }
            if (answer != answerCorrect){
                cout << "Wrong: Try to answer the question again..." << endl;    
                cin >> answer;
                attempt =2;
                }   
                
            if (answer == answerCorrect){
                cout << "The answer is correct." << endl;
                if (attempt == 1){
                    score += 10;
                }
                else if (attempt == 2){
                    score += 5;
                }
            }

            else {

                cout << "The answer is wrong." << endl;
                cout << "The correct answer is: " << answerCorrect;
                cout << endl;
            }
            attempt = 0;
        }
        cout << "The points you gotten are: " << score << " /100" << endl;
    
    }
    else if (SelectLevel == 4){
        
        return 0;
    }}
int MainMenuFunc(char Play){
    int SelectLevel;
    cout << "DIFFICULTY LEVEL: " << endl;
    cout << "1. Easy" << endl;
    cout << "2. Moderate" << endl;
    cout << "3. Advanced" << endl;
    cout << "4. Exit" << endl;
    cin >> SelectLevel;
    if (SelectLevel >4){
        cout << "Error - Please enter the options up above:" << endl;
        cin >> SelectLevel;
    } 
    int selectLevels = randomInt(SelectLevel);
}


int displayProblem(){
    //Will display the problem 
}
int main(){
    char Play;
    bool PlayAgain = true;
    do {cout << "Maths quiz: "<< endl; // Print the title.
    cout << "Would you like to play the math quiz? (Y/N)" << endl;
    cin >> Play;
    if ((Play == 'Y') || (Play == 'y')){
        char Start = MainMenuFunc(Play); 
    }
    else if ((Play == 'N') || (Play == 'n')){
        return 0;
    }
    else{
        cout << "Error please select (Y/N)." << endl;
    }
    while(true){
    cout << "Would you like to play again? (Y/N)" << endl;
    cin >>Play;
        if ((Play == 'Y') || (Play == 'y')){
        char Start = MainMenuFunc(Play); 
    }
    else if ((Play == 'N') || (Play == 'n')){
        return 0;
    }
    else{
        cout << "Error please select (Y/N)." << endl;
    }}

    
}while(PlayAgain != true);
}