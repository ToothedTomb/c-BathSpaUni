#include <iostream>
#include <string>
using namespace std;
string France; // need to do 10 capital citys in europe.
string Germany;
string Hungary; //3. Budapest
string England; // 4. London. 
string Russia; // 5. Moscow.
string Switzerland; // 6. Bern.
string Finland; // 7. Helsinki.
string Poland; // 8. Warsaw.
string Norway; // 9. Oslo.
string Sweden; // 10. Stockholm.
int main() {
    //Title.
    cout << ("-------------------10 capital citys in Europe Quiz-----------------------") << endl;
    cout << ("Message: This quiz is case sensitive!!! ") << endl;
    cout << "1) What is the capital city of France? " << endl;
    cin >> France;

     if (France == "Paris"){
        cout << ("This is correct - Well done.") << endl;
        //cout << ("2) What is the capital city for Germany?") << endl;

     }
    else{
        cout << ("Sorry, this is not correct - The answer is Paris") << endl;
        //cout << ("2) What is the capital city for Germany?") << endl;


    }
    cout << ("2) What is the capital city of Germany?") << endl;

    cin >> Germany;

    if (Germany == "Berlin") {
        cout << ("This is correct - Well done.") << endl;
    }
    else{
        cout << ("Sorry, this is not correct - The answer is Berlin.") << endl;
    }
    cout <<("3) What is the capital city of Hungary?") << endl;
    cin >> Hungary;
    if (Hungary == "Budapest"){
        cout << ("This is correct - Well done.") << endl;
    }
    else {
        cout << ("Sorry, this is not correct - The answer is Budapest.") << endl; 
    }
    cout << ("4) What is the capital city of England?") << endl;
    cin >> England;
    if (England == "London"){
        cout << ("This is correct - Well done.") << endl;
    }
    else {
        cout << ("Sorry, this is not correct - The answer is London.") << endl;
    }
    cout << ("5) What is the capital city of Russia?") << endl;
    cin >> Russia;
    if (Russia == "Moscow"){
        cout << ("This is correct - Well done.") << endl;
    }
    else{
        cout << ("Sorry, this is not correct - The answer is Moscow.") << endl;
    }
    cout << ("6) What is the capital city of Switzerland? ") << endl;
    cin >> Switzerland;
    if (Switzerland == "Bern") {
        cout << ("This is correct - Well done.") << endl;
    }
    else{
        cout << ("Sorry, this is not correct - The answer is Bern.") << endl;
    }
    cout << ("7) What is the capital city of Finland?") << endl;
    cin >> Finland;
    if (Finland == "Helsinki"){
        cout << ("This is correct - Well done.") << endl;
    }
    else{
        cout << ("Sorry, this is not correct - The answer is Helsinki.") << endl;
    }
    cout << ("8) What is the capital city of Poland?") << endl;
    cin >> Poland;
    if (Poland == "Warsaw"){
        cout << ("This is correct - Well done.") << endl;
    }
    else {
        cout << ("Sorry, this is not correct - The answer is Warsaw.") << endl;

    }
    cout << ("9) What is the capital city of Norway?") << endl;
    cin >> Norway;
    if (Norway == "Oslo"){
        cout << ("This is correct - Well done.") << endl;

    }
    else{
        cout << ("Sorry, this is not correct - The answer is Oslo.") << endl;
    }
    cout << ("10) What is the capital city of Sweden?") << endl;
    cin >> Sweden;
    if (Sweden == "Stockholm"){
        cout << ("This is correct - Well done.") << endl;
    } 
    else {
         cout << ("Sorry, this is not correct - The answer is Stockholm.") << endl;

    }
    cout << ("Thank you for doing this quiz. :)") << endl;
     //   cin  
}

//ref
/*
https://www.google.com/search?q=10+capital+cities+in+europe&sca_esv=571553989&sxsrf=AM9HkKmwkSJjbceoFjgLAKKQmxWrMpC7qA%3A1696683487196&source=hp&ei=31UhZaqwCeyBhbIPwdan4Ao&iflsig=AO6bgOgAAAAAZSFj7ws78gAENZ10AHJwLkN0MhlfFLH1&oq=10&gs_lp=Egdnd3Mtd2l6IgIxMCoCCAAyBxAjGIoFGCcyBxAjGIoFGCcyCBAAGIoFGJECMggQABiKBRiRAjIHEAAYigUYQzIHEAAYigUYQzIHEAAYigUYQzIHEAAYigUYQzIQEAAYgAQYFBiHAhixAxiDATIFEAAYgARI2BJQAFjSC3ADeACQAQCYAbcBoAGQBKoBAzQuMbgBA8gBAPgBAagCCsICBBAjGCfCAgQQABgDwgIREC4YgAQYsQMYgwEYxwEY0QPCAgsQLhiABBixAxiDAcICCBAAGIAEGLEDwgIOEC4YigUYsQMYgwEYkQLCAgoQABiABBgUGIcCwgILEAAYgAQYsQMYgwHCAhEQLhiDARivARjHARixAxiABMICDhAAGIoFGLEDGIMBGJECwgIHECMY6gIYJ8ICDhAuGIAEGLEDGMcBGNED&sclient=gws-wiz*/

/* If state ment.
If (Somthing happens){
What happens if its true or false based on somthing happens
else{
What happens if its the oposite. 
// You can also do else if (comamnd) before the else you wanted to add another command that happens when it meet the command. 
}*/