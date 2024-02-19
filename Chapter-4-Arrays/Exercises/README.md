# Chapter 4 Exercises

Exercises under the heading **Assessment Exercises** are required for the programming skills portfolio assessment.

Further exercises are provided under the heading **Practice Exercises**. As the title suggests these are here for you to practice and develop your programming skills. Completing these exercises is encouraged, although they have **no impact** on the programming skills portfolio mark.

For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push the code to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

---
&nbsp;

## Assessment Exercise

### 1: Iterating through arrays

Write a program(s) that does the following...

* Uses an array to store each letter of the English alphabet
* Uses a for loop to print the entire alphabet to the console
* Uses a for loop to print only the second half of the alphabet.
* Uses a for loop to print all the elements of the following array in reverse order ```1, 3, 5, 7, 9```.
* Declares the following array of integers ```10, 15, 25, 35, 50, 75``` and uses a for loop and some maths to calculate the average of these values.
* Prints out the highest and lowest value from the following integer array values: ```10, 88, 4, 21, 345, 99, 17```
* Assigns all numbers between 0 and 100 to an array using a for loop. Then using another for loop, iterates through the array and print only the odd numbers.

&nbsp;
&nbsp;

## Practice Exercises

### A. Declare and initialise

*You can include each part of this task in the same project file*


1) Declare the following arrays making sure you provide the correct data type and array size (*you do not need to initialise these arrays with values*):

* array of characters with 26 elements
* array of integers with 10 elements
* array of strings with 4 elements
* array of decimal numbers with 18 elements

2) Declare and initialise arrays to hold the following information using the **longhand** method of initialisation.

* 1,2,3,4,5,6,7,8
* “Hello”, “Bye”
* ‘A’, ‘B’, ‘C’
* 1.0, 2.0, 3.0, 4.0, 5.0
* 10, 20, 30, 40, 50, 60

3) Use the **shorthand** method to declare and initialise arrays to hold the following information:

* “”, “a”, “aa”, “aaa”
* 1,10,100,1000,10000
* true, false, false, true
* 5.6, 1.8, 4.34, 7.65

&nbsp;
&nbsp;

### B. Print value at index

Consider the following list of vehicles: *“Car”, “Train”, “Tractor”, “Skiff”, “Tank”*. Declare and initialise an array called vehicles using these values then complete the following tasks:

* Print index 3 to console
* Print index 0 to console
* Print “Tractor Tank” to console using array indexes
* Print “Car Skiff Train” to console using array indexes

&nbsp;
&nbsp;

### C. Fill it up

Declare an integer array with enough space to store 10 values. Use a for loop to allow the user to enter the values for the array, then output freshly filled array.

&nbsp;
&nbsp;

### D. Array Length

Create a program that outputs the size of arrays containing the following values using the sizeof() method described in chapter 6.

* 1,2,3,4,5,6,7,8
* “Hello”, “Bye”
* ‘A’, ‘B’, ‘C’

&nbsp;
&nbsp;

### E. Exceptions

An exception in computing programming is an event that disrupts the normal flow of a program.

Copy this array of five elements into your IDE:

```C+
int ages[] = { 19, 23, 22, 30, 18 };
```

Now try to print the value at index 5:

```C+
cout << ages[5] << endl;
```

What happens? In some IDE’s your console indicates an out of bounds exception, whilst in others you might just get a random value. This is because you are trying to access an index that is beyond the scope of the ages array (e.g. a value doesn’t exist at this position).

Adjust the program so that you successfully print the last value of the array, therefore avoiding the exception.

&nbsp;
&nbsp;

### F. Heart alteration

Modify the below heart rates example so the for loop condition limit is calculated by the array length rather than being “hard coded”. Check your solution works by adding or removing values from the array.

*Hint:* Use the ```sizeof()``` method within the conditional check

```C++
int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };

for (int i = 0; i < 8; i++){
      cout << heartRates[i] << endl;
}
```

&nbsp;
&nbsp;

### G. Working the Array

Write a program that will prompt the user to input ten integer values and store these into an array. Now do the following

* Output all the values in the array after the user has inputted their values
* Print the sum of all values in the array.
* Print the average of the values in the array.

*Extension Problem*

* Make the program print the smallest and greatest numbers in the array.
* Output array in ascending, then descending order

&nbsp;
&nbsp;

### H. Simple Search

Write a simple search engine that tests if a string is present in a string array. The array you need to declare should be initialised with the following values "Lee" "John", "Sam", "Coral", "Ron", "Jake". The string you are searching for is "Sam"

The program should output all the values in the array then output which position in the array the search term can be found at.

*Extension Problem*

Allow the user to enter the string to be searched for.

&nbsp;
&nbsp;

### I. Array Counting			
Create an array that can hold ten integers, and fill it with numbers inputted by the user. Display those values on the screen, and then prompt the user for an integer. Go through the array, and count the number of times this number is found and print the result.

&nbsp;
&nbsp;

### J. New array

Write a program which takes two arrays of 10 integers each, called a and b. c is an array with 20 integers. The program should put into c the result of appending b onto the end of a, so the first 10 integers of c are from array a, the latter 10 are from b. Then the program should print array c.

&nbsp;
&nbsp;

### K. Drop it

Create an array holding these numbers: {1, 2, 3, 4, 5, 6}. Write a program that asks for an index and a number. Then it inserts the number at the indicated index of the array, and moves each element after the selected index forward one place (with the last number dropping off the end and disappearing).

&nbsp;
&nbsp;

### L. 2D Array

Declare and initialise a 2D array to hold the following 5 x 3 table and then print the values to the console. You should use ```sizeof()``` in the loop conditions.

| <!-- -->    | <!-- -->    | <!-- -->    |
|-------------|-------------|-------------|
| 2 | 4 | 6 |
| 3 | 6 | 9 |
| 4 | 8 | 12 |
| 5 | 10 | 15 |
| 6 | 12 | 18 |

&nbsp;
&nbsp;

### M. Fill the 2D Arrays

Declare - but don’t initialise - another 2D array to hold another 5 x 3 table. Fill the arrays using a nested for loop. You should use ```sizeof()``` in the loop conditions.

&nbsp;
&nbsp;

## N. Find the Column average

Writes a program to find the average value of each column of a 2D integer array

&nbsp;
&nbsp;

### O. Address Storage

Use a multidimensional string array that will store the names and respective postcodes of 3 or more people. Once you have declared the array ask the user to enter the required data then print out the details of each person to the console, e.g.

| Name | Postcode |
|------|----------|
| Bob	 | A59 1LK  |

&nbsp;
&nbsp;
