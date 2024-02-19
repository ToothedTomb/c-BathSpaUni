# Chapter 7 - Intro to OOP

* [What is OOP?](#what-is-oop)
  * [Creating a Class](#creating-a-class)
  * [Class Access](#class-access)
  * [Example Class](#example-class)
  * [Creating Class Instances](#creating-class-instances)
  * [Accessing Object Data Members](#accessing-object-data-members)
  * [Class Methods](#class-methods)
  * [Class Constructors](#class-constructors)
  * [Overloading Class Methods](#overloading-class-methods)
  * [This Pointer](#this-pointer)
  * [Class Destructors](#class-destructors)

&nbsp;
&nbsp;

## What is OOP?

When the C++ language was created the main aim of its original author Bjarne Stroustrup was to add object orientation to the C language. Object oriented programming is based around the concept of objects which can be viewed as user defined data types. In opposition to primitive data types (int, char, bool, etc), which can only contain one piece of information, these object can contain multiple bits of data, and perform various actions (or methods).

We have already been working with different objects by accessing different Classes from the standard C++ library. Strings are one example; when we create a string variable we are creating an object from the string class, upon which we can perform any of the various methods declared in the string class. We have also made use of the file stream class, from which we can create input and output file objects.

In object oriented programming objects are created from Classes, which define what information an object is made up of and what it can do. This information is stored in:

* *Data members* - e.g. variables
* *Methods* - e.g. functions

Classes can be used to mimic real world objects and define their characteristics for the purposes of our programs. For example, we might use a class to define a set of enemy robots in a game, or to define products in a shopping app.

The central principles of Object Oriented Programming are thus:

* *Classes* - Hold the definitions of the data (e.g. variables) and procedures (e.g. functions, also known as methods) available to objects of the class
* *Objects* - The name given to individual instances that can be created from the class.

Object Oriented Programming is extremely useful and important in being able to make our code much more efficient as classes create reusable code that we can instantiate multiple objects from. Whilst these objects will each be based off the same underlying code, we can store unique values in their data members which might change how they are used and what they can do in the program. For example, we might have a products class in a supermarket database which includes data for weight and price. Objects created from this class would then have very different values dependant on what type of product it is (e.g. banana vs beef).

Let’s think about an example to help visualise what classes are and why they are useful. Imagine we are making a program where we need a database of cars (e.g. Autotrader), or a game where we need different cars to race against each other (e.g. Need for Speed). Typing out the data that defines each car individually would become tiresome, so we need a way of speeding up the process. This is where classes come in...

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/car-class.png">
</p>

With a class we can define the main characteristics we want every car in our program to have. Then from this base class we can instantiate multiple objects and set unique values for the data members to create each individual car. For instance from our image above we might have a car class that defines the main characteristics for the cars in our program as Colour, Brand, Make and Fuel Type. From this class we can then begin creating many different types of car such as the three included above. The car class is then likely to include the functions a car can perform such as accelerate, brake, steer, check fuel and many more.

&nbsp;
&nbsp;

### Creating a Class

From our car example we can see that when we create classes we are defining the blueprint for user defined data types. To create a class we start with the keyword class followed by the class name (like with our variables and function names, we want to give the class a sensible and useful name). The class body is then wrapped in curly braces and the closing curly brace has a semicolon after it. Note inside the class body the line ```public:```, this is required  if we want to be able to access the data and methods of a class object elsewhere in our program (more on this shortly).

```C++
class ClassName{
    public:
        //data
        //methods
};
```

Classes should be declared outside of the main function and convention is to use a capital letter when naming the class. A class can have as many data members and methods as required.

&nbsp;
&nbsp;

### Class Access

Above it was noted that we need to specify class data and methods as being public if we want to access them in other areas of our program. This is done as by default class data and methods are private. This means the data and methods can only be accessed from within the class itself. There are different types of class access, which can be specified using the access specifier (like public is set in the example below).

* *Public:* Data and Procedures can be accessed in other parts of the program within the scope of the class
* *Private:* Data and Procedures can only be accessed from within the class
* *Protected:* Data and Procedures can only be accessed from within the class and child (or derived classes)

You can mix and match access specifiers in a single class and make certain data and methods public, whilst keeping others private

```C++
class ClassName{
    public:
        //data & methods here will be public

    private:
        //data & methods here will be private

};
```

&nbsp;
&nbsp;

### Example Class

```C++
class Cat{
    public:
       string name;
       string colour;
       int age;
       double weight;
};
```

Here we have an example of a simple class in C++. This class defines the basic characteristics in a blueprint for Cat objects. Each cat in a program using this class would be able to have a name, colour, age and weight.

&nbsp;
&nbsp;

### Creating Class Instances

Creating objects from a class can be done in two ways. The first is to create objects alongside the class definition, by including the names for the objects in a comma separated list between the closing curly braces and semi-colon at the end of the class definition. For example below we create four objects from our Cat class.

```C++
class Cat{
    public:
       string name;
       string colour;
       int age;
       double weight;
}felix, tom, bagpuss, simba;
```

The second method is to declare the objects in the main function by specifying the class type followed by the instance name (similar to declaring other variables).

```C++
int main() {
    Cat felix;
    Cat tom;
    Cat bagpuss;
    Cat simba;
    return 0;
}
```

&nbsp;
&nbsp;

### Accessing Object Data Members

To access the data members of class objects we use the member access operator (a full stop). This allows us to set or modify the values stores in the data members.

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;
};
int main() {
    Cat felix;
    felix.name = "Felix";
    felix.colour = "Black";
    felix.age = 14;
    felix.weight = 4.4;

    Cat bagpuss;
    bagpuss.name = "Bagpuss";
    bagpuss.colour = "Pink";
    bagpuss.age = 43;
    bagpuss.weight = 8.9;

    return 0;
}
```

In the above example we use the access operator ( ```.``` ) to set the data member values for two cat objects (felix and bagpuss).

&nbsp;
&nbsp;

### Class Methods

Class methods define the tasks that a class object can perform. They are created and act in the same way as standard functions that we might include in our program. Methods in a class can access all of the data defined within the class and can also be passed data from other parts of the program via parameters. To make an object perform the method we use the access operator ( ```.``` ) and invoke the function on the object.

For instance, our below example adds a simple method to make our cat object say hello and its name. In the main program after creating the object we invoke the ```sayHello()``` method on the felix object instantiated from the Cat class.

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    void sayHello(){
        cout << "Hello my name is: " << name << endl;
    }
};
int main() {
    Cat felix;
    felix.name = "Felix";
    felix.colour = "Black";
    felix.age = 14;
    felix.weight = 4.4;

    felix.sayHello();

    return 0;
}
```

Just like standard functions we can declare then define class methods separately. When doing so we include the declaration inside the class body, then define the method outside of the class. When defining the method outside of the class we need to use the scope resolution operator ( ```::``` ) to prepend the Class name ahead of the method name. We do this to say this is the definition for the method declared within the scope of the respectively named class. Without prepending this the compiler would be looking for a standard function not declared within a class.

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    void sayHello();
};

void Cat::sayHello(){
    cout << "Hello my name is: " << name << endl;
}
```

&nbsp;
&nbsp;

### Class Constructors

Classes can be given special functions known as constructors that are automatically called when an object of the class is created. Constructors can be useful for initialising the data members of objects. For example it would be useful to have a constructor on our Cat class to initialise the values when it is first created. Constructors have no return type and are always named exactly the same as the class.

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    Cat();
    void sayHello();
};

Cat::Cat(){
    name = "Kitty";
    colour = "Black";
    age = 1;
    weight = 2.0;
}

void Cat::sayHello(){
    cout << "Hello my name is: " << name << endl;
}


int main() {
    Cat myCat;
    myCat.sayHello();
    return 0;
}
```

In the above example we have added a constructor to our cat class. This has been declared and defined separately just like the ```sayHello()``` method. In the constructor we initialise the data members of the class object default values. Therefore when the object ```myCat``` is created and the ```sayHello()``` method is called on it the expected output will be

```
Hello my name is: Kitty
```

&nbsp;
&nbsp;

### Overloading Class Methods

Class methods and constructors can be overloaded just like normal functions and the compiler will work out which one to use based on the parameters passed in. For example below we have added an additional constructor to our Cat class. This one has parameters which are used to set the data members of the class object with the values passed in when the object is created.

We can pass parameters to a constructor by including the values in parentheses after instantiating the class object e.g:

```C++
Cat myCat2("Felix", "Brown", 12, 7.8);
```

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    Cat();
    Cat(string n, string c, int a, double w);
    void sayHello();
};

Cat::Cat(string n, string c, int a, double w){
    name = n;
    colour = c;
    age = a;
    weight = w;
}

Cat::Cat(){
    name = "Kitty";
    colour = "Black";
    age = 1;
    weight = 2.0;
}

void Cat::sayHello(){
    cout << "Hello my name is: " << name << endl;
}

int main() {
    Cat myCat;
    myCat.sayHello();

    Cat myCat2("Felix", "Brown", 12, 7.8);
    myCat2.sayHello();
    return 0;
}
```

In this example we now have two cat objects being instantiated. This first uses the constructor with no parameters, as none are passed in when the object is created. Therefore this object uses the default values (e.g. Kitty etc). The second object uses the constructor with parameters, meaning the values passed in via the parentheses are used to set the object's data members when its created. The expected output for this example is therefore:

```
Hello my name is: Kitty
Hello my name is: Felix
```

&nbsp;
&nbsp;

### This Pointer

In the previous example the constructor parameters have just been named with a single letter. This isn’t great practice as it's not very revealing as to what the parameters do. It would be better if these constructor parameters were the names of the data members to which they will be assigned. When a class method or constructor has parameter arguments with the same name as a class data members we need to use the ```this``` pointer to explicitly refer to the class members. For example in a method ```this -> name```; would refer to the class member whilst ```name``` refers to the method parameter. Without the this pointer if we tried using ```name = name``` to set the class data member we would actually just be making the method parameter equal to itself. The below code updates our previous example to use the ```this``` pointer when the constructor parameters use the same names as the data members to which they will be assigned.

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    Cat();
    Cat(string name, string colour, int age, double width);
    void sayHello();
};
Cat::Cat(string name, string colour, int age, double width){
    this->name = name;
    this->colour = colour;
    this->age = age;
    this->weight = w;
}
Cat::Cat(){
    name = "Kitty";
    colour = "Black";
    age = 1;
    weight = 2.0;
}
void Cat::sayHello(){
    cout << "Hello my name is: " << name << endl;
}

int main() {
    Cat myCat;
    myCat.sayHello();

    Cat myCat2("Felix", "Brown", 12, 7.8);
    myCat2.sayHello();
    return 0;
}
```

&nbsp;
&nbsp;

### Class Destructors

As well as constructors, classes can be given destructors, which are special functions that are called automatically when a class object gets destroyed (e.g. goes out of scope). The look very similar to constructors as they must also have exactly the same name as the class, however to differentiate them a tilde character (~) is included at the beginning. Unlike constructors, destructors cannot accept parameters, therefore you can only have one destructor per class as they cannot be overloaded.

Our simple example program with the cat class has been updated to include a destructor, which includes a basic output message. This will be executed when the myCat object that is instantiated in this example goes out of scope, which in this case with when the program ends (e.g the return statement is reached).

```C++
class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    Cat();
    Cat(string name, string colour, int age, double width);
    ~Cat();
    void sayHello();
};
Cat::Cat(string name, string colour, int age, double width){
    this->name = name;
    this->colour = colour;
    this->age = age;
    this->weight = width;
}
Cat::Cat(){
    name = "Kitty";
    colour = "Black";
    age = 1;
    weight = 2.0;
}
Cat::~Cat(){
    cout << name << " has been destroyed" << endl;
}
void Cat::sayHello(){
    cout << "Hello my name is: " << name << endl;
}
int main() {
    Cat myCat;
    myCat.sayHello();
    return 0;
}
```

Expected output:

```
Hello my name is: Kitty
Kitty has been destroyed
```

&nbsp;
&nbsp;

## Organising Code

With the addition of classes our programs are becoming more complex and add to the number of things declared outside of the main function. As we begin to add more classes and functions it is easy to see how this might become difficult to navigate. For that reason we want to be able to organise our code effectively.

In C++ it is common practice to include classes across two files.

* *Header (.h)* - includes all the declarations (the interface)
* *Cpp (.cpp)* - includes all the definitions (the implementation)

For our previous cat example the header file (```.h```) would include the class declaration including the data members and method declarations. Note on Xcode the header might have the ```.hpp``` extension

```C++
//CAT.H
#include <iostream>
using namespace std;

class Cat{
public:
    string name;
    string colour;
    int age;
    double weight;

    Cat();
    Cat(string name, string colour, int age, double width);
    ~Cat();
    void sayHello();
};
```

The cpp file (```.cpp```) would then include the definitions of any class methods, constructors and destructors. Note at the top of the file we need to link to the header file using an include statement (just like you do with ```iostream``` and ```string```). For user created files the include should specify the file name, which should be written inside double quotation marks

```C++
//CAT.CPP
#include "Cat.h" //include cat header file

Cat::Cat(string name, string colour, int age, double width){
    this->name = name;
    this->colour = colour;
    this->age = age;
    this->weight = width;
}

Cat::Cat(){
    name = "Kitty";
    colour = "Black";
    age = 1;
    weight = 2.0;
}

Cat::~Cat(){
    cout << name << " has been destroyed" << endl;
}
void Cat::sayHello(){
    cout << "Hello my name is: " << name << endl;
}
```

To gain access to these files in the main program we would then also need to link to the header file by using an include statement.

```C++
// MAIN.CPP
#include <iostream>
#include "Cat.h" //include cat header file
using namespace std;


int main() {
    Cat myCat;
    myCat.sayHello();

    return 0;
}
```

Making use of header files and accompanying .cpp files is not just limited for when you begin adding classes to your programs. They can be used to organise programs that make use of lots of functions. In this case you would include the function declarations in the header file and the full definitions in the .cpp file.

&nbsp;
&nbsp;

### Adding Files in Visual Studio

To add files to a project in Visual Studio, right click the source files folder in the solution explorer and select ```Add → New Item``` from the pop up menu

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/add-files-vs1.png">
</p>

In the popup window select C++ file, give this file a name and click ```Add```.

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/add-files-vs2.png">
</p>

Repeat the process by again right clicking the source folder and selecting ```Add → New Item``` from the popup menu. This time when the popup window appears select Header File. Give this the same name as the C++ file you added but retain the .h file extension.

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/add-files-vs3.png">
</p>

&nbsp;
&nbsp;

### Adding Files in XCode

To add files in XCode go to ```File → New File```

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/add-files-xc1.png">
</p>

Select ```C++ file```

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/add-files-xc2.png">
</p>

Give the file a name and leave ```Also create a header file``` checked. Click ```next``` and save the file alongside the main.cpp file of your project

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/add-files-xc3.png">
</p>
