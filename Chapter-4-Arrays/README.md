# Chapter 6 - Arrays

* [What is an Array](#what-is-an-array)
  * [Why use an Array](#why-use-an-array)
* [Declaring and Initialising an Array](#declaring-and-Initialising-an-array)
  * [Example Array Declaration and Initialisation](#example-array-declaration-and-initialisation)
  * [The Shorthand Method](#the-shorthand-method)
* [Retrieving Values Stored Within an Array](#retrieving-values-stored-within-an-array)
* [Iterating Through an Array](#iterating-through-an-array)
* [Getting Input into an Array](#getting-input-into-an-array)
* [Array Length](#array-length)
* [Advanced: Multi-dimensional Arrays](#advanced-multi-dimensional-arrays)
* [Further Reading](#further-reading)

## What is an Array?

An array is a container that holds a fixed number of values of a single type. While a variable stores one value only, an array stores a series of values.

Just like a variable, the array must have a data type, for example int, char, boolean, double etc.

You can think of an array as a single box that contains lots of smaller boxes, where each smaller box holds a single value.

Think of an advent calendar. The advent calendar is a single box that contains multiple numbered compartments that each store chocolate pieces. This can be described as an array.

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/advent-calendar.png">
</p>

In this analogy we see the following elements:

* The Array is the advent calendar itself
* Memory locations are the compartments represented by numbered doors
* Data Type stored, which in this case is chocolate

&nbsp;
&nbsp;

### Why use an Array?

Arrays provide a more efficient solution of storing multiple pieces of data than variables.

Take for example this stack of variables that stores five student numbers:

```C++
int studentNumber1 = 323412;
int studentNumber2 = 373622;
int studentNumber3 = 387261;
int studentNumber4 = 318273;
int studentNumber5 = 362719;
```

Now consider we want to store the student number of every individual in Bath Spa University. Using variables alone, we would need over 7000 independent and unique variables! This is unmanageable.

Going back to our five student numbers, we could use one array to store each piece of data. The array could then be represented like this:

| <!-- -->    | <!-- -->    | <!-- -->    | <!-- -->    | <!-- -->    |
|-------------|-------------|-------------|-------------|-------------|
| 323412 | 373622 | 387261 | 318273 | 362719 |

&nbsp;
&nbsp;

## Declaring and Initialising an Array

The below code shows how to declare an array. An array’s dimension is the number of elements it will contain.

```
dataType arrayName[dimension];
```

Notice the only difference between declaring a normal variable and an array is the addition of square brackets to the end of the name, which are used to declare the array size.

Here is an actual example of an array declaration:

```C++
int myArray[10];
```

This declares an array that can hold 10 integer values.

There are a few components here that we need to address:

* *Data Type:* The type of data we wish to store (e.g. int, char, String etc)
* *The [ ] symbols:* This states that what we wish to declare is an array
* *Number of Elements:* We need to tell the array object how many values we want to store in it. This is so it can allocate enough computer memory to store the values

&nbsp;
&nbsp;

### Example Array Declaration and Initialisation

Just like we declare and initialise a variable, we need to declare and initialise an array so it can store some actual values.

A variable: ```int age = 19;```

An array: ```int ages[5];```


This will create an empty array of integers with 5 placeholders for integers available:

| <!-- -->    | <!-- -->    | <!-- -->    | <!-- -->    | <!-- -->    | <!-- -->    |
|-------------|-------------|-------------|-------------|-------------|-------------|
| Index (position) | 0 | 1 | 2 | 3 | 4 |
| Value            |   |   |   |   |   |

*NB: The index (position) of elements in an array starts at 0 and not 1 as you might expect*

Now that we have declared the array we can add some values at each index.

```C++
ages[0] = 19;
ages[1] = 23;
ages[2] = 22;
ages[3] = 30;
ages[4] = 18;
```

&nbsp;
&nbsp;

### The Shorthand Method

But hang on, what we have just programmed requires just as many lines of code as storing each value as an independent variable!

Well, we will see the benefits of an array when we use shorthand to declare and assign its values. In this method C++ will automatically know that the array contains 5 elements based on the number of vaules included in the initialisation list. This means we can choose to omit the dimension value within the square brackets [ ].

```C++
int ages[] = { 19, 23, 22, 30, 18 };
```

&nbsp;
&nbsp;

## Retrieving Values Stored Within an Array

Now we have stored multiple values using an array, we need a way of retrieving them. We do this by referring to the index (or position) of the array we wish to access.

Here I have created an array (using the shorthand method) to store the resting heart rates of 8 people

```C++
int heartRates[8] = { 54, 60, 71, 59, 62, 63, 60, 58 };
```

Now suppose that I want to print to console the first value (54) and the last value (58)

Firstly, let’s remind ourselves what index these two values are positioned at:

* 54 - index 0
* 58 - index 7

I could print out the value 54 (index 0) using two approaches.

The first finds the value at index 0 of the heartRates array and stores is to a variable called ```dataOut```. It then prints the value of ```dataOut``` to console.

```C++
int dataOut = heartRates[0];
cout << dataOut << endl;
```

We could however skip a line of code and print the value at index 0 of the heartRates array directly.

```C++
cout << heartRates[0] << endl;
```

This second approach is better because it removes the need to declare an additional variable.

&nbsp;
&nbsp;

## Iterating Through an Array

Often a programmer finds that he or she needs to access all the values within an array.

Consider again the array of resting heart rates:

```C++
int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };
```

If we wanted to print each value to a new console line we could implement this:

```C++
cout << heartRates[0] << endl;
cout << heartRates[1] << endl;
cout << heartRates[2] << endl;
cout << heartRates[3] << endl;
cout << heartRates[4] << endl;
cout << heartRates[5] << endl;
cout << heartRates[6] << endl;
cout << heartRates[7] << endl;
```

However, we know that when we see repeating code in a computer program it is likely there is a more efficient way of doing things.

What is actually changing in the print statement above? Only the index number, which increments by +1 from index 0 to index 7 across the 8 lines of code.

A *for loop* provides a more efficient solution.

```C++
int heartRates[] = { 54, 60, 71, 59, 62, 63, 60, 58 };

for (int i = 0; i < 8; i++){
      cout << heartRates[i] << endl;
}
```

Remember the for loop includes an *initalisation*, *condition* and *increment*. We can use the *initalisation* to create a counting variable to run through our array indexes (this variable is typically named ```i``` to stand for index). The *condition* is used to set the limit of our array and the *increment* adds one to our counting variable each time so we can run through all the array indexes. Inside the for loop body we can then access each array value by using our ```i``` counting variable to set the index. As this ```i``` variable increases by 1 on each iteration we will be able to access each value.

Work through this for loop one iteration at a time until you fully understand how it works.

&nbsp;
&nbsp;

## Getting Input into an Array

Above we have seen how we can can output values from and array and use a loop to easily iterate through and access each of these values. Yet how might we input values into an array?

Just like a standard variable we can input into array indexes with ```cin```. For example if I wanted to input a value into the second index of a given array the code might look as follows:

```C++
cin >> myArray[1]; //input into second index of array
```

If we wanted to fill up an entire array with values we could use a for loop, much like we have above to output the values of an array with ```cout```.

```C++
int myNumArray[10];//declare an array with space for 10 values
//INPUT
for (int i = 0; i < 10; i++){//set up a for loop to run 10 times
      cin >> myNumArray[i];//get the users input into each array index
}
//OUTPUT
for (int i = 0; i < 10; i++){//set up a for loop to run 10 times
      cout << myNumArray[i] << endl;//output each array value
}
```
In the above example we declare an array with space for 10 int values then use a for loop to iterate over the array and get the users input into each index. The second for loop is then used to output these entered values.

&nbsp;
&nbsp;

## Array length

To get the size of an array, its length, or in other words the number of elements in the array, we can use the sizeof() function. In fact we can use sizeof() on any standard variable and it will return how many bytes the variable takes up in memory (e.g. an integer is 4 bytes). Therefore to get the length of an array we can divide the size of the entire array (the size in bytes of all the elements added together) by one element of the array to get the length. For example, if we had an int array with 10 elements the entire array would be 40 bytes as each individual integer is 4 bytes. So 40 / 4 will return us 10, which is the length of our array. Below is an example of this using an array of type double, where the console will output 8.

```C++
double shoeSizes[] = { 7.0, 7.5, 8.0, 8.5, 9.0, 9.5, 10.0, 10.5};
cout << sizeof(shoeSizes) / sizeof(shoeSizes[0]) << endl;
```

&nbsp;
&nbsp;

## Advanced: Multi-dimensional Arrays

As we have just discussed throughout this chapter an array is a container object that holds a fixed number of values of a single data type. The following code demonstrates how to declare an array for holding 5 values of type int:

```C++
int myArray[5];
```

Recall that an array can be declared and initialized as follows

```C++
int myArray[5] = {1, 2, 3, 4, 5};
```

Which, in this case saves us from having to assign each element separately:

```C++
myArray[0] = 1;
myArray[1] = 2;
myArray[2] = 3;
myArray[3] = 4;
myArray[4] = 5;
```

The five elements of myArray are accessed and printed on the console window as follows

```C++
cout << myArray[0] << endl;
cout << myArray[1] << endl;
cout << myArray[2] << endl;
cout << myArray[3] << endl;
cout << myArray[4] << endl;
cout << myArray[5] << endl;
```

You can think of this as accessing the 5 rows of a single column table:

| <!-- -->    |
|-------------|
| Value of int at index 0: 1 |
| Value of int at index 1: 2 |
| Value of int at index 2: 3 |
| Value of int at index 3: 4 |
| Value of int at index 4: 5 |

But what if we want to add another column to our table (array)? This is where multi-dimensional arrays come in!. For example take a look at the following 4 (rows) x  3 (columns) table:

| <!-- -->    | <!-- -->    | <!-- -->    |
|-------------|-------------|-------------|
| 1 | 5 | 9 |
| 2 | 6 | 10 |
| 3 | 7 | 11 |
| 4 | 8 | 12 |

We could use the following 2D (two dimensional) array to represent the table:

```C++
int myArray[4][3];
myArray[0][0] = 1;
myArray[0][1] = 5;
myArray[0][2] = 9;
myArray[1][0] = 2;
myArray[1][1] = 6;
// and so on...
```

Note that the 2D array is setup and accessed using two square brackets ```[ ] [ ]``` as opposed to one ```[ ]```. The first set is for the rows and the second is for the columns. In the above case I’m filling one row at a time.

You can also declare and initialize a 2D array using the shorthand method.

```C++
int myArray[4][3] = {
    {1, 5, 9},
    {2, 6, 10},
    {3, 7, 11},
    {4, 8, 12},
};
```

Accessing values in a 2D array is done by specifying the row you want to access in the first square bracket and the column in the second. For example the following would output 10 based on the 2D array declared above: ``` cout << myArray[1][2] << endl; ```

If you wanted to iterate through a 2D array you would need to utilise a nested for loop. The outer loop runs through the rows, whilst the inner loop will run through each column of data in the row.

```C++
int myArray[4][3] = {
    {1, 5, 9},
    {2, 6, 10},
    {3, 7, 11},
    {4, 8, 12},
};
for(int i = 0; i < 4; i++){//iterates over the 4 rows
  for(int j = 0; j < 3; j++){//iterates each piece of data in a row (e.g. 3 columns)
    cout << myArray[i][j] << " ";
  }
  cout << endl;
}
```

## Further Reading

Arrays are just one type of container in C++. There are many others available that can be extremely useful for handling and manipulating data as your programs become more complex. Two of these (standard library arrays & vectors) we look at in more detail in CodeLab II, but use the resources below if you wish to explore further now.

### Standard Library Arrays

C++ (11 onwards) has a library array alongside the built in array.
The library array offers some additional functionality beyond the built in array that can make handling arrays slightly easier.

http://en.cppreference.com/w/cpp/container/array

### Vectors

Vectors are similar to arrays in that they store multiple values together as one unit. Unlike arrays however they can be resized and handle their own memory management.

http://www.cplusplus.com/reference/vector/vector/

### Standard Template Library

The standard template library contains many other container types including pairs, maps and lists. Each can be extremely useful for handling, modifying and manipulating data.

http://www.cplusplus.com/reference/stl/  
https://www.linkedin.com/learning/c-plus-plus-templates-and-the-stl/
