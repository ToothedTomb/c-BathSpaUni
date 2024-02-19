# Chapter 1 - Programming Basics

* [Hello World](#hello-world)
* [Variables and Data Types](#variables-and-data-types)
* [Non-Primitive Data Types](#non-primitive-data-types)
* [Input and Output Stream](#input-and-output-stream)
* [Coding Conventions](#coding-conventions)
* [Operators](#operators)
* [Constant Variables](#constant-variables)
* [Increment and Decrement Operators](#increment-and-decrement-operators)
* [Relational Operators](#relational-operators)

## Hello World

In programming Hello World is traditionally the first program written when getting started with any language. Below is the sample code for Hello World in C++. Refer to the comments and code breakdown for an explanation of the main elements of the program, many of which you will require for every C++ program you write.

```C++

#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace

int main(){ // define main function
	cout << "Hello World" << endl; // output statement

	return 0; //return statement
}

```

&nbsp;

### Code breakdown

#### Preprocessor directive

```C++
#include <iostream> // preprocessor directive - include iostream file
```
Anything beginning with a #hash is a preprocessor directive that instructs the compiler to process this information before compiling of the rest of the code. The #include instruction acts like a copy and paste command and tells the compiler to copy and paste the contents of the iostream 'header' file to the top of our program. The iostream header file contains the declarations for the standard input-output library in c++. We need this to gain access to things like ```cout`` which is the standard library output command for outputting content to the console.


#### Using Namespace Std

```C++
using namespace std; // declare use of the standard namespace
```
The contents of iostream that we’ve just added are part of the standard C library which includes lots of useful predeclared functionality for c++ programs. All the elements of this library are declared within a namespace, in this case the std namespace. To access its functionality we need to let the compiler know we are using this namespace. When a namespace is declared the compiler will check to see if any undeclared identifiers (e.g. keywords it does not recognise) are present within the namespace. If it is the program will proceed, otherwise it will throw an error. Declaring the use of the standard namespace saves us having to explicitly declare its use every time we use functionality from the library. For example without declaring use of the std namespace our output statement in our Hello World program would need to be written like the example below with std explicitly declared before both ```cout``` and ```endl``` as the functionality for these come from the standard library:

```C++
std::cout << "Hello, World!" << std::endl;
```

&nbsp;
&nbsp;
> **Advanced Note** When starting out with small programs declaring ```using namespace std``` at the beginning of our programs saves times as we can avoid the constant explicit declaration as described above. However, when you become more proficient and begin writing more advanced programs it is advised that you avoid its declaration at the start of the program and explicitly declare the namespace before operations like cout each time. This helps avoid potential conflicts between different libraries you might be using that are using the same names for different operations.

&nbsp;
&nbsp;

#### The Main Function
```C++
int main(){ // define the main function
      cout << "Hello World" << endl; // output statement
	return 0; //return statement
}
```
All C++ programs start with the execution of a **main function**. It is essential to have a main function otherwise your program simply will not work. The main function is the first thing the compiler looks for when executing C++ code. The word main is followed by a pair of parentheses followed by the body of the main function which is enclosed by curly braces. 

The function body includes all the code that we want our program to run. C++ programs are executed line by line in order. Each line is a statement; which is an expression that can produce a result. Statements are always terminated by a semicolon. Omitting the semicolon is probably the most common error when writing code. Try removing the semicolon at the end of the hello world statement, a red line should appear on that line in the IDE to indicate an error. These red lines are useful for helping find errors when writing your code.


The first line in our main function is an output statement. ```cout``` is the standard output stream in C++. Our ```cout``` statement is saying insert the sequence of characters for the sentence "Hello world" into the output stream. You will notice the two less than signs ```<<```  this is called the insertion operator. So we are inserting Hello World into the output stream.

We then insert something called ```endl```. This is an instruction to insert a newline then flush the contents of the output stream.

&nbsp;
&nbsp;
> **Advanced Note** - A new line can also be created by inserting the newline character ```\n``` within a string. The difference between ```endl``` and ```\n``` is ```endl``` flushes the output stream after adding the newline. Flushing the stream ensures the contents are outputted to the console in a timely manner. If you have several  ```cout``` statements one after the other, it may not be necessary to flush the stream at the end of each ```cout``` statement. Therefore you could use the newline character instead and then on the final line use ```endl``` to ensure the stream is flushed.
>```C++
> cout << "Hello, World! This is the first line \n";
> cout << "Here is a second line \n";
> cout << "Here is a third line \n";
> cout << "This fourth line will flush afterwards" << endl;
>```
>*Further Information:* https://www.geeksforgeeks.org/endl-vs-n-in-cpp/

&nbsp;
&nbsp;

#### Return Statement

The final line of the main function is the return statement. The return statement causes the main function to finish. Usually this is followed by a return code in our case 0, which is generally interpreted as the program worked as expected without errors.

&nbsp;
&nbsp;
> **Visual Studio Note** - When running the program on some old versions of Visual Studio you may think it is not working. This is because the console window exits as soon as the return statement is reached, which happens so quickly it appears the program does not run. To force the console window to stay open include the following line before the return statement. This line of code waits for input e.g. pressing enter.
>
>  ```C++
>  system("pause");
>  ```

&nbsp;
&nbsp;

&nbsp;
&nbsp;
&nbsp;

## Variables and Data types

A variable in computer programming is a value that can change. Variables are used to store information in a program and act like little boxes that contain values. We can put a value (e.g. 8) in this box and give it a name, for example ‘myInteger’. That way, whenever you want to access the number in the box, you just refer to the variable, ‘myInteger’. The important thing is however, that you can change the value in the box, yet the name of the box still remains the same. Variables are the cornerstone of programming and are used to perform a multitude of actions.

C++ is known as a strongly typed language, this means that when creating variables in our program we must specify what type of data it will contain. This data type could be a whole number (int), single character (char) or a decimal number (double). A variable's data type determines the values it may contain, plus the operations that may be performed on it. In C++ (and other strongly typed languages) once a variables data type is declared it cannot be modified and can only hold values of this type for the duration of the program.

Example Variables:
```C++
int myNum = 6; //ints store whole numbers
double decNum = 1.234;//doubles store decimal placed values
char myLetter = 'J'; //chars store single character values
bool isSunny = false; //bools store either true or false
```

The core data types: int (whole number), char (single character), double (decimal number) are accompanied by similar types which expand or decrease their size and range. The choice between using similar data types is usually a matter of…

* Size of number expected. You may need to calculate large numbers
* Accuracy. If you need a certain level of precision when calculating numbers
* Managing memory resources. Memory can be saved if you only use the appropriate data type
* Size for the job. For example, declaring a variable for an individual's age can be achieved with short.

Within CodeLab we will typically just be using the basic core data types (int, char, double), but for reference the following link lists the wider range of data types that are available in C++: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm

&nbsp;
&nbsp;
> **Advanced Note** - In C++11 the auto keyword was included to allow a variable data type to be inferred from the value its initialised with.
>
>  ```C++
>  int myFirstInt = 5; //explicitly declared integer variable
>  auto mySecondInt = 6; //variable data type automatically inferred from the value assigned
>  ```
> For the declaration of simple variables with one of the core data types (int, char, double), it is best to be explicit and you would not use auto. Auto is typically used when your programs become much more complex and you are using complex types available in C++.
>
>Further Information
>
>https://en.cppreference.com/w/cpp/language/auto  
>
>https://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/
&nbsp;
&nbsp;

&nbsp;
&nbsp;
&nbsp;

## Non-Primitive Data Types

In C++ we also have access to non primitive data types. Strings are one of the most widely used 'objects' in programming. They hold a sequence of characters surrounded by double quotation marks " on both sides and can contain any characters.

Example Strings:
```
"Hello", "Hello World", "Bye"
```

These non-primitive types usually contain enhanced functionality beyond primitive data types that allow them to be manipulated in various difference ways. For example with strings we can access actions that allow us to easily modify the string such as append.

```C++
string myString = "Hello";//create string with the value Hello
myString.append(" World");//add the value " World" to the string to make it "Hello World"
```
Note that when you want to begin manipulating strings in your program you will need to include the string header.

```C++
#include <string>
```

Other non-primitive types we will use in future sessions are Arrays and Vectors, which act as containers for multiple variables/objects. We will also learn how to create our own data types when we begin exploring object orientation.

&nbsp;
&nbsp;
&nbsp;

## Input and Output Stream

The  ```#include <iostream>``` directive written at the top of a C++ program provides us access to the C++ standard library input and output stream. This includes existing functionality to get user input from the console and output information to the console.

We use ```cin``` and the extraction operator ```>>``` to get user input from the console

We use ```cout``` and the insertion operator ```<<``` to output information to the console.

An easy way to remember the difference between ```cin``` and ```cout``` and the actions they perform is to refer to them as *console in* (cin to get information) and *console out* (cout to display information).

&nbsp;
&nbsp;
&nbsp;


## Coding Conventions

The importance of Coding Conventions is crucial. There is nothing worse in programming then opening up a C++ file (or HTML5 or CSS etc.) and being confronted with the code equivalent of an overturned filing cabinet. Keeping your code neat and tidy not only helps you find your way around, but helps others understand your work when looking for help. Neat code can save you hours when trying to fix errors and its importance should not be underestimated (which is why its part of the marking criteria for the Programming Skills Portfolio and Utility App assessments!). Here are six tips that should help you keep your code organised so you can make sense of it when you return to it at a later date.

### 1 - Program Descriptors

Add a couple of commented lines right at the very top of your programme that describes, in the simplest terms, what the program does.

### 2 - Comments

Beginners should annotate their code with comments to remind them what certain commands do. For example, the first time you type...

```C++
cout << "Hello World" << endl;
```

...It wouldn’t hurt to place a comment next it that says…

```C++
// This is how you print to the console in C++.
```

As your programmes become more complex, you can use comments to make it easier to find certain code blocks, or remind you to finish certain coding tasks. Comments act like bookmarks in this sense.

*You are not expected to comment every single line of code, but you should get into the habit of commenting key operations*

### 3 - Variable names

Variable names should be unambiguous and where possible, short. For example if I was writing a programme that asks for a user's name, I would save their input in a variable called userName. Seems obvious, but you’d be surprised how often variable names such as ‘a’ or ‘x’ are used. This is lazy and makes understanding what is happening in the program much harder

### 4 - CamelCase

If you use more than one word for a variable name (e.g. myInteger), make sure you capitalise each word. Most people only capitalise from the second word onwards (e.g. myFavouriteFood), this is known as camel case.

### 5 - Whitespace

Write code as if you were writing an instruction manual. Keep everything in line (unless you have to indent - more on this later), and only break up code blocks with blank lines if it makes sense to do so. Think of code blocks as paragraphs with short sentences that should be kept together until the next sentence is clearly the beginning of a new set of instructions. 

These 'blocks' of code are also act as a good guide of what to comment. Rather than comment every line, comment each block of related code to provide an overview of what it does.

### 6 - Indentation

Indentation helps identify where code blocks begin and end. Code blocks in C++ are wrapped in a pair of curly braces ```{ }```, and the code inside the block should be indented by 1 tabbed space (of 4 spaces). If nesting a code block inside another this would be tabbed again. See the example below and don’t worry at this stage if code doesn’t make sense… it will soon!

```C++
#include <iostream> 
using namespace std; 
int main(){ 
	cout << "Hello World" << endl; //notice how this line has been indented within the main function block
	if(6==7){
		cout << "Hmmm that seems odd!" << endl;//notice how this line is indented again within the IF block
	}

	return 0; //return statement
}
```

&nbsp;
&nbsp;
&nbsp;

## Operators

An operator in computer programming is a symbol that tells the compiler to perform specific mathematical, relational or logical operations.

This might seem complex, but in fact we use these symbols all the time. The most simple operators to understand are probably the mathematical or arithmetic operators.  

&nbsp;

### Mathematical Operators

These include the following operators:
```
+ 	(additional)
- 	(subtraction)
/ 	(division)
* 	(multiplication)
% 	(modulus or ‘find remainder’)
```

Here are some examples of mathematical operators in action. Note the use of variables here.
```C++
int a = 5;
int b = 7;
int c = a + b;
```
The value of the variable c is 12.

```C++
int d = 20;
int e = 10;
int f = d - e;
```
The value of the variable f is 10.

```C++
int numberOne = 10;
int numberTwo = 3;
int remainder = numberOne % numberTwo;
```
The value of the variable remainder is 1.

&nbsp;
&nbsp;

### Concatenation

The ```+``` operator can also be used to concatenate or ‘link’ Strings. This means you can join one String to another using the ```+```operator.
```C++
string h = "hello";
string i = " ";
string j = "world";
cout << h + i + j << endl;
```
This concatenates the word "hello" with a space " "  and the word "world". The String printed to the console here would look this this: "hello world".

&nbsp;
&nbsp;

### The Assignment Operator

The assignment operator should also be familiar to you.

It looks like this:

```
=
```  

This simply means you are assigning the value on the right to the variable on the left. Here are some examples.
```C++
double a = 10.5;
```
Here you are assigning the variable ```a``` the value 10.5 - *note the use of double as the data type as we are dealing with a decimal number.*

```C++
bool myBool = false;
```
Here you are assigning the variable myBool the value false.

&nbsp;
&nbsp;

### The Insertion and Extraction operators

We have already seen the insertion and extraction operators when discussing the input and output stream.

#### Insertion

The insertion operator ```<<``` is used to insert information into streams such as the output stream (```cout```).

```C++
cout << "Hello World";//inset the value "Hello World" into the output stream to display on the console
```

You can insert multiple pieces of information within a single output statement by using multiple insertion operators. This is useful to output variables of different types in a single statement.

```C++
int age = 32;//variable to store age
string name = "Jake";//variable to store name
cout << "My name is " << name << " I am " << age << " years old" << endl;//output name and age making use of multiple insertions
```

You might notice the ```endl``` command at the end of the output statement. This command adds a newline so any subsequent information will appear on the next line down when viewed on the console.

#### Extraction

The extraction operator ```>>``` is used to extract information entered by the user on the console and assign it to an appropriate variable.

```C++
cout << "What is your name" << endl;//ask user a question
string name;//variable to store user name
cin >> name;//get users response and assign to name variable
```

Like the insertion operator the extraction operator can be used multiple times in a single statement. This is useful to capture multiple values at once.

```C++
int num1, num2;//declare two number variables
cout << "Please enter two numbers" << endl;//request two numbers from the user
cin >> num1 >> num2;//get input into the two number Variables
cout << "The sum of those values is: " << (num1 + num2) << endl;//output the result of the calculation
```

&nbsp;
&nbsp;
&nbsp;

## Constant Variables

When we want to store some information in our program we create a variable. As the name suggests the values stored in a variable can change (they can vary!). If you have a value that shouldn’t be altered you can declare this as a constant by using the const keyword at the beginning of the variable declaration. Variables declared as a constant cannot have their value changed.

&nbsp;

### An Example

Let’s say we wanted to create a simple maths program and wanted to store the value of PI in a variable. The value of PI is always the same so we don’t want this to change, else it could interfere with other calculations in our program. Therefore, it would make sense to declare our PI variable as a constant.

```C++
const int PIVALUE = 3.14159265359;
```

Constant variable names are typically written in all capital letters to easily identify them as constants in the program.

&nbsp;
&nbsp;

## Increment and Decrement Operators

In addition to the basic operators which can be used to assign values to variables (=) or perform mathematical operations (+, -, /, \*, %) there are two further mathematical operators known as the increment and decrement operators, which are used to increase or decrease the value of a variable.

Here are some examples:

```C++

++      //two ‘plus’ signs = increase the value by 1
--      //two ‘minus’ signs = decrease the value by 1
+= 2    //‘plus’ sign then ‘equals’ sign then the number 2 = increase the value by 2
-= 2    //minus’ sign then ‘equals’ sign then the number 2 = decrease the value by 2

```

In code, increment and decrement operators may be used like this:

```C++
//This code block will print the value 10 to console.
int time = 9;
time ++ ;
cout << time;
```

&nbsp;
&nbsp;

```C++
//This code block will print the value 18 to console.
int temperature = 15;
temperature +=3;
cout << temperature;

```

&nbsp;
&nbsp;

```C++
//This prints to console the first part of the nursery rhyme ’10 green bottles’
//using the decrement operator and cout statements.
int greenBottles = 10;
cout << greenBottles << " green bottles sitting on the wall" << endl;
cout << "But if one green bottle should accidentally fall" << endl;
greenBottles--;
cout << "They'll be " << greenBottles << " green bottles sitting on the wall" << endl;
```

&nbsp;
&nbsp;

## Relational Operators

In addition to these mathematical and assignment operators we have relational operators which compare two things and evaluate to TRUE (1) or FALSE (0). This means relational operators can be used to make decisions in computer programs, e.g. if something is true do this, otherwise if its false do that

The following example illustrates the use of the less than (```<```) relational operator:

```C++
7 < 10
```

This expression in words is saying *“7 is smaller than 10”*. This is a TRUE statement.

There are a number of relational operators:

```C++
<	//less than
> 	//greater than
>= 	//greater than or equal to
<=	//less than or equal to
== 	//equality - is the same as
!= 	//inequality - is not the same as
```

Here are some examples of relational operators in action. Note the use of variables here.  

```C
//This program will print 0 to console.
int numberOne = 6;
int numberTwo = 11;
cout << (numberOne == numberTwo);
```

&nbsp;
&nbsp;

```C
//This program will print 1 to console.
int numberOne = 6;
int numberTwo = 11;
cout << (numberOne != numberTwo);
```

&nbsp;
&nbsp;

> **Advaced Note** - Why doesn’t the console print true or false? In C++ the value of true and false is represented numerically with the values 1 and 0 respectively. Hence why in our first example above 0 (false) is printed to the console, as 6 is equal to 11 is a false statement.
>
>Then in the second example our relational operator asks if the variables are not the same, so 1 (true) is printed to the console, as 6 is not equal to 11 is a true statement.
>
>If you want to print the word rather than 0 or 1 include this line at the top of your main function:
>```C++
>cout << boolalpha;
>```

These relational operators are not much use on their own, but will become particularly handy in the next chapter when we move onto selection statements.

&nbsp;
&nbsp;