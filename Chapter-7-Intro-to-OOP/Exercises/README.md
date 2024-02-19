# Chapter 7 - Exercises

Exercises in this Chapter are not required as part of the Programming Skills Portfolio assessment. These exercise are provided for you to practice and develop your programming skills. Completing these exercises is encouraged, although they have **no impact** on the programming skills portfolio mark.

For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push the code to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

&nbsp;
&nbsp;

## Practice Exercises

### A. Woof Woof

Write a program that declares a class which defines the characteristics of a dog. The program should instantiate two objects from this class and assign data to its members. Once these dog objects have been created output their details to the console

&nbsp;
&nbsp;

### B. Data Class

Create a class called data. The class should contain two integer variables, a constructor that accepts values for these variables and a function that returns the sum of these variables.

With the class defined, ask the user of the program to input two numbers. Pass these values to the class constructor and show the result of the sum of the two numbers.

#### Extension Problems

* Prevent invalid data being entered
* Declare and define the class functions and constructor separately
* Organise your class to make use of a .cpp and .h file

&nbsp;
&nbsp;

### C. Playing around in class

Use this exercise to play around with creating and accessing class members and methods. Your members and methods should be specified as public and you should try out the following:

* Create a class called Animal
  * Give the class at least the following members
    * Type
    * Name
    * Colour
    * Age
    * Weight
    * Noise
  * The class should have the following methods
    * sayHello (says its name via ```cout```)
    * makeNoise (make an appropriate noise via ```cout```)
    * animalDetails (output all the details of the animal object)
* Instantiate at least two objects from your animal class (e.g. Dog, Cow)
  * Set values for each of the variables
  * Invoke each of the class functions
* Add a default constructor (e.g. without parameters) that provides a message to say an animal has been created
* Add a destructor that provides a message to say when an animal is deleted
* Add a constructor with parameters to set initial values for at least two of your object's variables (e.g. name and noise)
* Instantiate an object from your class that makes use of the parameterized constructor to set some initial values
* Organise your class to make use of a .cpp and .h file

&nbsp;
&nbsp;

### D. This

Using your Dog class from the exercise 1 (or create a new one) create a constructor that has the parameter string ```name```. Use a this pointer to then assign the class data member name the value passed in by the constructor argument.

#### Extension Problem:

* Repeat the process so you constructor sets all of your class variables using the this pointer.

&nbsp;
&nbsp;

### E. - Hide and Seek

Create a class called Student. Give this the members name and number, but set these to private. Implement appropriate getter and setter functions within the class to initialise and then output these variables.

