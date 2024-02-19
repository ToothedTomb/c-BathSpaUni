/*
There will be 10 drinks and 10 snacks.
Note - Windows visual studio will show £ as U, for unknown reason. It works fine on Linux VS code and Online C++ compiler. 
A problem with the configure of my windows visual studio is most likly. Just saying this for incase if you get the same problem. 
*/
//I will need to use the Window.h in order to get it working for Windows. 
//Why did you use to ifdef _win32 and unistd.h in the code in a if statement. They do the same thing but I orignally coded it for linux. Windows did not support unistd.h and not supported for linux windows.h
//So I came accross doing somthing like this. So it can run (more importantly) in windows and Linux. So everyone is happy. :) It works as well for mac os but uses the same libuary of Linux.  
#include <iostream> // Input and output.
#ifdef _WIN32 //if running windows
#include <windows.h> //Use this libuary 
#else
#include <unistd.h> //If on Unix like Linux use this libuary. 
#endif // End the if statement. 
using namespace std; //Allow us to use cout and cin without std::
//To print text is count and to get user input is cin.
//Why does money variavle got &Money - This is done to advoid the variable from being copied and not updating on other function. 
int AddMoney(int& Money) { //This function will allow people to add in more money to the program
    int ADDmoney;
    cout << "How much money do you wanna put into the vending machine?" << endl;
    cin >> ADDmoney; //Ask to input money that wanna add.
    if (cin.fail()){
        cin.clear();
        cin.ignore(100,'\n'); // This will make the error message when the wrong data type is written to restrick the error to one. 
        cout << "ERROR - Please enter for a minimum £0 and maximum of £60:" << endl;
        cin >> ADDmoney;
    }
    while (ADDmoney < 0 || ADDmoney > 60) { // If money is less than or equal 0 then display an error. While means it will go in a loop. 
        cout << endl;
        cout << "ERROR - Please enter for a minimum £0 and maximum of £60:" << endl;
        cin >> ADDmoney;
    }
    Money = ADDmoney + Money; //Add the new money to the money that is in the vending machine. 
    cout << "Your limit to spend is: " << "£" << Money << endl; //Show the limit they have on money. 
    return 0;
}

int DrinksBuy(int& Money) { // Function to allow people to choose a drink. 
    int SelectDrink;
    int Running = true;

    //Running = true;
while (Running == true) {
    cout << "Drinks:" << endl;  //List of all of the drinks.
    cout << "1) Japanese Sake (Nihonshu). - £2.00" << endl;
    cout << "2) Chuhai. - £1.00" << endl;
    cout << "3) CocaCola (original). -£5.00" << endl;
    cout << "4) Fanta. - £4.00" << endl;
    cout << "5) Cherry CocaCola. - £5.00" << endl;
    cout << "6) Pepsi. = £2.00" << endl;
    cout << "7) Jimmys ICED coffee - Caramel. - £3.00" << endl;
    cout << "8) Calbee Chips. - £2.00" << endl;
    cout << "9) Green Tea. - £2.00" << endl;
    cout << "10) Lemonade. - £3.00" << endl;
    cout << "11) Go back to main menu" << endl;
    
        if (Money == 0) { //If no money. The program will go back to main menu.
            cout << endl;
            cout << "Sorry you ran out of money, please add money to the vending machine." << endl;
            return 0;
        }
        cin >> SelectDrink;
        if (cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');

            cout << "Error- Please select from this list." << endl;
            cin >> SelectDrink;
        }
        if (SelectDrink > 11) { //If they enter a number higher then 11 display an error. 
            cout << "Error- Please select from this list." << endl;
            cin >> SelectDrink;
            
        }
        if (SelectDrink == 11) { // If 11 is pressed close program
            Running = false;
            return Money;
        }
        switch (SelectDrink) {
            int mainMenu;
        case 1: // If the user press a numner them show then the drink and subtract their money with the cost of the drink
            if (Money >= 2) { //If money is more or equal to price allow the process.
                cout << "You have chosen: " << "Japanese Sake (Nihonshu)!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 2.00; //Subtract money from the cost
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money; //Display the change.
                cout << endl;

                cout << "Please select another drink or press 11 to go to main menu: " << endl;
                //The same for others but with different drinks and prices.

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 2:
            if (Money >= 1) {
                cout << "You have chosen: " << "Chuhai!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 1.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;

        case 3:
            if (Money >= 5) {
                cout << "You have chosen: " << "CocaCola (original)!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 5.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 4:
            if (Money >= 5) {
                cout << "You have chosen: " << "Fanta!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 4.00;
                Money = Moneyback;
                cout << endl;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 5:
            if (Money >= 5) {
                cout << "You have chosen: " << "Cherry CocaCola!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 5.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 6:
            if (Money >= 2) {
                cout << "You have chosen: " << "Pepsi!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 2.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 7:
            if (Money >= 3) {
                cout << "You have chosen: " << "Jimmys ICED coffee - Caramel!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 3.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 8:
            if (Money >= 2) {
                cout << "You have chosen: " << " Calbee Chips!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 2.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 9:
            if (Money >= 2) {
                cout << "You have chosen: " << " Green Tea!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 2.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or exit: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;
            }
            break;
        case 10:
            if (Money >= 3) {
                cout << "You have chosen: " << " Lemonade!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your drink has now been dispensed." << endl;
                int Moneyback = Money - 3.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another drink or press 11 to go to main menu: " << endl;

                cout << endl;
            }
            else {
                cout << "You cant afford this drink." << endl;
                cout << "Please select another drink: " << endl;
            }
            return Money;
        }



        //cout << "You can order another drink or press 11 to exit." << endl;

    }

    return 0;
}
int SnacksMenuFunc(int& Money) { //Snack menu. Its the same as the drinks.
    int selectFoodItem;
    int Running = true;
    while (Running == true) {
        if (Money == 0) {
            cout << endl;
            cout << "Sorry you ran out of money, please add money to the vending machine." << endl;
            return 0;
        }

        cout << endl << "Snacks:" << endl;
        cout << "1) KitKat. - £3.00" << endl;
        cout << "2) Jolly Ranchers. - £2.00" << endl;
        cout << "3) Swedish Fish. -£2.00" << endl;
        cout << "4) Mochi. - £7.00" << endl;
        cout << "5) Umaibō. - £3.00" << endl;
        cout << "6) Taiyaki. = £1.00" << endl;
        cout << "7) Tokyo Banana. - £3.00" << endl;
        cout << "8) Calbee Chips. - £2.00" << endl;
        cout << "9) Pocky. - £2.00" << endl;
        cout << "10) starburst. - £10.00" << endl;
        cout << "11) Go back to main menu" << endl;

        cin >> selectFoodItem;
        if (cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');
            cout << "ERROR - Please enter the snacks that we got." << endl;
            cin >> selectFoodItem;
        }
        if (selectFoodItem == 11) {
            return 0;
        }

        if (selectFoodItem > 11) {
            cout << "ERROR - Please enter the snacks that we got." << endl;
            cin >> selectFoodItem;
        }
        switch (selectFoodItem) {
        case 1:
            if (Money >= 3) {
                cout << "You have chosen: " << "KitKat!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 3.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 2:
            if (Money >= 2) {
                cout << "You have chosen: " << "Jolly Ranchers!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 2.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 3:
            if (Money >= 2) {
                cout << "You have chosen: " << "Swedish Fish!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 3.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 4:
            if (Money >= 7) {
                cout << "You have chosen: " << "Mochi!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 7.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 5:
            if (Money >= 3) {
                cout << "You have chosen: " << "Umaibō!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 3.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 6:
            if (Money >= 1) {
                cout << "You have chosen: " << "Taiyaki!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 1.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 7:
            if (Money >= 3) {
                cout << "You have chosen: " << "Tokyo Banana!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 3.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 8:
            if (Money >= 2) {
                cout << "You have chosen: " << "Calbee Chips!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 2.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 9:
            if (Money >= 2) {
                cout << "You have chosen: " << "Pocky!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 2.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }
            break;
        case 10:
            if (Money >= 10) {
                cout << "You have chosen: " << "starburst!" << endl;
                cout << "Processing your payment:" << endl;
            #ifdef _WIN32 // if running windows.
                Sleep(4000);
            #else
                sleep(4); //Pause program
            #endif
                cout << "We have finished processing your order and your snack has now been dispensed." << endl;
                int Moneyback = Money - 10.00;
                Money = Moneyback;
                cout << "Your change back is: " << "£" << Money;
                cout << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;
                cout << endl;
            }
            else {
                cout << "You cant afford this snack." << endl;
                cout << "Please select another snack or press 11 to go back to main menu: " << endl;

            }

            //return Money;
        }
    }

    return Money;

}

int mainmenuFunc(int& money) {
    int Option;
    bool running = true;
    while (true) {
        cout << endl; //Main menu
        cout << "1) Select Drinks." << endl;
        cout << "2) Select Snacks." << endl;
        cout << "3) View Balance." << endl;
        cout << "4) Add more money." << endl;
        cout << "5) Exit." << endl;
        cin >> Option;
        if (cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');

    }
        if (Option == 4) { //if select 4 then you are adding more money.
            int Money = AddMoney(money);
        }
        else if (Option == 5) { // If 5 is pressed then  it will give you the change back.
            running = false;
            cout << "You change is being processed..." << endl;
        #ifdef _WIN32 // if running windows.
            Sleep(4000);
        #else
            sleep(4); //Pause program
        #endif
            cout << "Your change is: " << "£" << money << endl;
            return 0;
        }
        else if (Option == 1) { //if option 1 is pressed go to function for the drinks
            Option = DrinksBuy(money);
        }
        else if (Option == 3) { // If 3 is pressed display the balance. 
            running = false;
            cout << "Your balance is: " << "£" << money << endl;
        }
        else if (Option == 2) { //If two is pressed go to snacks function 
            Option = SnacksMenuFunc(money);
        }
        else {
            cout << "Please select from this list: " << endl; //Display an error if its not selected from the list.
            //cin >> Option;
        }

    }
    return 0;
}

int Balance(int& money) { // Banlace function 
    int mainmenu;
    int Money = mainmenuFunc( Money);
    cout << "Balance = " << Money << endl;
    return 0;
}


int main() { // Will automatticly run. All does is ask the user for money then use the main menu.
    int money;
    int MainMenu;
    int Moneyback;
    cout << "Vending Machine by Jonathan Steadman." << endl;
    cout << endl; // Add a new line
    cout << "How much money do you wanna put into the vending machine?" << endl;
    cin >> money;
    if (cin.fail()){
        cin.clear();
        cin.ignore(100,'\n');

    }
    while (money <= 0 || money > 60) { // If money is less than or equal 0 then display an error. While means it will go in a loop.
        cout << endl;
        cout << "ERROR - Please enter for a minimum £1 and maximum of £60:" << endl;
        cin >> money;
        if (cin.fail()){
            cin.clear();
            cin.ignore(100,'\n'); //This should limit the error message from appearing to the end user. 

        }
  
    }
    //money = mainmenuFunc(MainMenu,money);
    cout << "You limit to spend is: " << "£" << money << endl;
    MainMenu = mainmenuFunc(money); //Hope it updates the money as well as open the main menu.
    //DrinksBuy(money, );




}
