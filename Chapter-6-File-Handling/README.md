# Chapter 6 - File Handling

* [File Handling](#file-handling)
  * [Declaring a File Stream Object](#declaring-a-file-stream-object)
  * [Writing Data to Files](#writing-data-to-files)
  * [Altering Default Writing Behaviour](#altering-default-writing-behaviour)
  * [Reading from Files](#reading-from-files)
  * [Formatting with getline](#formatting-with-getline)
  * [Moving Around a File](#moving-around-a-file)
  * [Getting the Current Position](#getting-the-current-position)

&nbsp;
&nbsp;

## File Handling

The ability to read and write data from files through file handling is useful to be able to load or save information to and from our programs. The use of file handling can make your programs much more dynamic as you have much more to work with than just the data that is *‘hard coded’* into your program.

To access the functionality we need for working with files we can use the C++ ```fstream``` library. This can be accessed by adding the following include to the top of the program:

```C++
#include <fstream>
```

To work with files we need to create a file stream object in our program. There are two file stream objects included in the ```fstream``` library. The first is ```ofstream``` (output file stream), which is used for outputting (writing data to files). The second is ```ifstream``` (input file stream), which is used for inputting (reading data from files) data from files into our program. ```ofstream``` works similar to ```cout``` and data can be output to the file using the same ```<<``` insertion operators. ```ifstream```, thus works similar to ```cin``` and data can be extracted from the file stream in the same way using the extraction operators ```>>```.

&nbsp;
&nbsp;

### Declaring a File Stream Object

Declaring a file stream object is similar to how we declare other variables in C++. First we specify the data type of the object (e.g. ofstream or ifstream), next we give this object a variable name and immediately follow this with the file name we want to access in parentheses. The syntax looks like this:

```C++
ofstream myOutputFile("program-data.txt"); //output file stream
ifstream myInputFile("program-data.txt"); //input file stream
```

&nbsp;
&nbsp;

### Writing Data to Files

As noted above we use the output file stream to write data to files. When you declare an output file stream object and name the file you want to access in parentheses, the default behaviour is to overwrite this file if it already exists. If it doesn’t exist a new one will be created. Once the ```ofstream``` object has been declared it is good practice to check it has actually been created and can be accessed. We can do this by using the ```.is_open()``` method:

```C++
if(myOutputFile.is_open()){
   //do file handling stuff
}
```

After we have finished writing data to the file it is also good practice to ensure we always close the file. This can be done using the .close() method.

```C++
myOutputFile.close();
```

To actually write some data to the file we can use the insertion operators on the output file stream object, just like we would to output information to the console with ```cout```. For example, if we wanted to write “Hello World” to a file the syntax would be

```C++
myOutputFile << "Hello World" << endl;
```

Let’s see an example of a full program piecing together everything described above. In this program we include the ```fstream``` library at the top. In the main program we then declare an output file stream object and check its ready to be written to using ```.is_open()```. Once we know the file is ready to go we ask the user for their name and age (temporarily storing input into a string variable), and write this data to the file using the ```<<``` extraction operators. When we are finished writing the data we close the file stream object.

```C++
#include <iostream>
#include <fstream> //include the file stream library
#include <string>
using namespace std;

int main(){
    ofstream outputFile("program-data.txt"); //declare output file
    if(outputFile.is_open()){ //check file is good
        string userInput; //string variable to temp store user input
        cout << "What's your name?" << endl; //ask for user input
        getline(cin, userInput); //get user input
        outputFile << userInput << endl; //write name to file

        cout << "How old are you?" << endl;//ask for user input
        cin >> userInput;//get user input
        outputFile << userInput; //write age to file.

        outputFile.close();//close the file
    }else{
        cout << "File cannot be accessed. Terminating program" << endl;
        return -1; //exit program
    }
    return 0;
}
```

&nbsp;
&nbsp;
> **Advanced Note** - XCode Note
>On XCode you need to get permission to read and write to the file in your project. To do this go to:
> ```Product →  Scheme →  Edit scheme```
> Make sure the Options tab is selected on the window that appear then locate the Working Directory option. Check this box and set the directory file path to the same folder as your main.cpp file is located.

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/xcode-file.png">
</p>

&nbsp;
&nbsp;

### Altering Default Writing Behaviour

By default when writing to files it will be opened in truncate mode. This means all the contents in the existing file will be removed and replaced with the new data being written. We can change this behaviour by including an optional parameter after after the filename specified when declaring the file stream object. Multiple modes can be selected by including a | between each one. The available modes for file stream objects are listed in the table below.

| Mode       | Behaviour                    |
|------------|------------------------------|
| ios::out   | Open file to write output    |
| ios::in  | Open file to read input    |
| ios::app   | Open a file and append output at the end of existing content. Data will always be appended to the end, even if seeking to different position   |
| ios::trunc  | Replace existing content when writing (default behaviour)    |
| ios::ate  | Open file and seek to end for writing new data. However in comparison to ios::app can seek anywhere in file to begin writing new content. To avoid truncating the file using in combination with ios::in.    |
| ios::binary | Treat the file as binary format rather than text so the data may be stored in non text format.   |

The most commonly specified mode is ```ios::app``` which ensures content is appended to the end rather than overwriting existing data. The syntax for opening a file in append mode would look like this:

```C++
ofstream myOutputFile("program-data.txt", ios::app);
```

If we were to alter our previous example and specify the file be opened in append mode as above, each time the program runs the new content will be added to the end of the file.

&nbsp;
&nbsp;

### Reading From Files

The basic process for reading from files is not too dissimilar to writing. The main difference is that we need to use the input file stream (ifstream) and utilise extraction operators ( ```>>``` ) to get the data from the file into our programs.

Let's imagine we have the following data in a text file called customers.txt (included in the exercise-files folder):

```
Joe Bloggs	43	BS2 4CV
Karen Smith	23	EM1 5XY
Garry Jones	18	FG4 8NP
Phil Legg	54	BS1 5NE
```

To read it in we create an ```ifstream``` object, then check the file exists using the ```is_open()``` method.  Once we know the file is open we can then extract the data from the file. We can do this using ```getline()```, like we’ve done before when getting user input from the console. However, instead of specifying ```cin``` as the first parameter of the ```getline()``` call, we specify we want to get the line from our input file stream and store this into a string variable. We can then output the string variable to the console.

```C++
#include <iostream>
#include <fstream> //include the file stream library
#include <string>
using namespace std;

int main(){

    ifstream inputFile("customers.txt"); //declare output file stream

    if(inputFile.is_open()){ //check file is open
        string data; //string variable to temp store data
        getline(inputFile, data);//get data from file into variable
        cout << data << endl; //output data to console
        inputFile.close();//close the file
    }else{
        cout << "File cannot be accessed. Terminating program" << endl;
        return -1; //exit program
    }

    return 0;
}
```

If you run the above code with the data in the text file you will notice it only outputs the first line:

```
Joe Bloggs	43	BS2 4CV
```

This is because the code to read in the data is only run once. By now we know that when we want to repeat code we should make use of loops. In this case a while loop is most appropriate as we don’t know how long the file might be. Therefore, to ensure we read the whole file we can use a while loop with the condition ```! inputFile.eof()```.

This condition says while we are NOT at the end of file (notice the use of the not operator ! ). Thus, we wrap the code which is reading the data line by line (first three lines inside the IF block) inside a while loop to keep reading WHILE we are NOT at the end of the file. The ```inputFile.close();``` should be included after the while loop as we do not want to close the file until we have finished reading all the data.

```C++
#include <iostream>
#include <fstream> //include the file stream library
#include <string>
using namespace std;

int main(){
    ifstream inputFile("cusstomers.txt"); //declare output file stream

    if(inputFile.is_open()){ //check file is open
        while(!inputFile.eof()){//while not at end of file
            string data; //string variable to temp store data
            getline(inputFile, data);//get data from file into variable
            cout << data << endl; //output data to console
        }
        inputFile.close();//close the file
    }else{
        cout << "File cannot be accessed. Terminating program" << endl;
        return -1; //exit program
    }

    return 0;
}
```

&nbsp;
&nbsp;

### Formatting with getline

Our code above reads in each line and moves onto the next through the use of ```getline()```. However, we can add a third parameter to the ```getline()``` call, which allows us to specify a point where ```getline``` should stop reading a line. This can be useful to separate  text as it's read in for storage, or formatted for output purposes.

The third parameter should be a character where you want ```getline``` to stop reading. Subsequent calls to ```getline``` will continue reading from after the character specified in the previous call. For example consider the code below:

```C++
cout << "Enter a sentence: " << endl;
string sentence;
getline(cin,sentence, ' ');
cout << sentence << endl;
```

If we run the above code and entered *“Hello Codelab”* as the sentence, the subsequent ```cout``` would only output *“Hello”* as ```getline``` has been instructed to read up to the white space character.

Here’s another example. Imagine we have the following sentence in a file:

*I want to separate this line of text into two,everything after that comma should be on a new line*

As instructed by the sentence we want to split it at the comma character. To do so our code would look like this:

```C++
#include <iostream>
#include <fstream> //include the file stream library
#include <string>
using namespace std;

int main(){

    ifstream inputFile("program-data.txt"); //declare output file stream

    if(inputFile.is_open()){ //check file is open
        string data; //string variable to temp store data

        getline(inputFile, data, ',');//get data up to comma
        cout << data << endl; //output to console

        getline(inputFile, data); //get rest of sentence
        cout << data << endl; //output to console

        inputFile.close();//close the file
    }else{
        cout << "File cannot be accessed. Terminating program" << endl;
        return -1; //exit program
    }

    return 0;
}
```

The first ```getline``` in this code would read the line up to the comma character, with the ```cout``` statement outputting that half of the sentence. The subsequent ```getline``` call will pick up from after the comma and get the rest of the line. Therefore our output would look like this:

```
I want to separate this line of text into two
everything after that comma should be on a new line
```

We can use this logic to nicely read in and format the customers.txt data from the previous example of reading in a whole file. The data in this file is separated by a tabbed space, which can be represented as a character using ```\t```. There are a few additional things going on in our modified program below including:

* Adding an array to store each piece of data
* The use of a third parameter in getline to separate the data as its read in
* Non typical increments in the for loop to correctly output the data.

Read the comments to see what is happening….

```C++
#include <iostream>
#include <fstream> //include the file stream library
#include <string>
using namespace std;

int main(){
    /* string array to store data from file
     there are 12 pieces of data in total */
    string data[12];

    //declare output file stream
    ifstream inputFile("customers.txt");

    int pos = 0; //variable to move through array indexes

    //check file is open
    if(inputFile.is_open()){
        //while not at end of file keep reading
        while(!inputFile.eof()){
            /* - if statement to check which piece of data is being read
               - if it's the third piece it is at the end of the line so   
                 ignore newline character
               - if its the the first two ignore we want to ignore the
                 tab character */
            if((pos+1) % 3 == 0){
                //get data up to new line character
                getline(inputFile, data[pos], '\n');
            }else{
                //get data upto tab character
                getline(inputFile, data[pos], '\t');
            }
            //increment pos so data gets input to next array position
            pos++;
        }
        inputFile.close();//close the file
        pos = 0;//reset position
    }else{
        //output message if file not read
        cout << "File cannot be accessed. Terminating program" << endl;
        //exit program
        return -1;
    }
    //OUTPUT DATA FROM ARRAY
    cout << "Customers" << endl;
    cout << "=========\n" << endl;
   /* for loop to run through array note it gets incremented by three each
      Time this is because there are three pieces of data on each line
      We want to output all three on each iteration then skip to the next line*/
    for(int i = 0; i < 12; i+=3){
        cout << "Name: " << data[i] << endl;//output name
        //output age - note 1 is added to i to move array index along          
        cout << "Age: " << data[i+1] << endl;
        //output postcode - note 2 is added move array index along again
        cout << "Postcode: " << data[i+2] << endl;
        cout << endl;//output blank line
        /* first time loop runs we output data at array indexes 0, 1, 2
         on the second iteration we output indexes 3, 4, 5
         on the third iteration we output indexes 6, 7, 8
         on the fourth iteration we output indexes 9, 10, 11
         now we've reached the end of the array so loop terminates */   
    }
    return 0;
}
```

The output from this program once the data is read in will look as follows

```
Customers
=========

Name: Joe Bloggs
Age: 43
Postcode: BS2 4CV

Name: Karen Smith
Age: 23
Postcode: EM1 5XY

Name: Garry Jones
Age: 18
Postcode: FG4 8NP

Name: Phil Legg
Age: 54
Postcode: BS1 5NE
```

&nbsp;
&nbsp;

### Moving Around a File

There may be occasions where you want to move around a file in order to read or write data at a specific point, or to jump to the beginning or end of the file. There are two different method calls we can use dependent on whether we are reading or writing to the file.

```C++
seekp(pos); //used on ofstream objects
seekg(pos); //used on ifstream objects
```

In both cases ```pos``` relates to the number of characters from the beginning of the file you wish to seek. For example the following would move five characters from the beginning of an output filestream

```C++
seekp(5); //seek 5 characters from the beginning
```

By default seek will start from the beginning of the file. However, we can add further parameters to the ```seekp()``` or ```seekg()``` calls to explicitly specify whether we want the seek to start from the beginning, end or current position in file.

```C++
seekp(5, ios::beg); //seek 5 characters from the beginning
seekp(-10, ios::end); //seek 10 characters back from the end
seekp(8, ios::cur); //seek 8 characters from the current position
```

The above work for both ```seekp``` (ofstream objects) and ```seekg``` (ifstream objects).

Note if seeking a position in an output file and then writing new data, the new data will overwrite any existing content from that position. It will not insert the data into the middle of the file from that point. If you want to insert into the middle you should copy the contents of the file, insert the new data and rewrite back to the file.

&nbsp;
&nbsp;

### Getting the Current Position

Whilst ```seekp()``` / ```seekg()``` will move you to a particular position in a file ```tellp()``` / ```tellg()``` will let you know what position you are at.

```C++
int pos = oFile.tellp(); //get position in ofstream
cout << pos << endl; //output position
```

We can use a combination of ```seek``` and ```tell``` to determine if a file is empty, as if we seek to the end of the file and the current position is 0 then there cannot be any content in the file. See the example below which could be used to check if a file is empty before attempting to read from it.

```C++
ifstream iFile("myfile.txt" ); //declare input file stream
iFile.seekg(0, ios::end); //seek to end of file
int pos = iFile.tellg(); //get position
if(pos == 0){ //if position is 0 file must be empty
    cout << "File is Empty" << endl;
    iFile.close();
}else{
    cout << "File not empty" << endl;
}
```

Take a look at the C++ documentation for a full list of the methods that can be used on input and output file streams.

https://en.cppreference.com/w/cpp/io/basic_ofstream
https://en.cppreference.com/w/cpp/io/basic_ifstream