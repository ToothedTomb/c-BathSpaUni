# Chapter 3 - Starting out with loops

* [What is a Loop](#what-is-a-loop)
  * [Why use Loops](#why-use-loops)
* [The While Loop](#the-while-loop)
  * [Back to Counting](#back-to-counting)
  * [Iterations](#iterations)
* [Infinite Loops](#infinite-loops)
* [The Break Statement](#the-break-statement)
* [The Continue Statement](#the-break-statement)
* [Do While Loops](#do-while-loops)
* [Basic Error Checking with Loops](#basic-error-checking-with-loops)
* [The For Loop](#the-for-loop)
  * [While Loops vs For Loops](#while-loops-vs=for-loops)
* [Nested For Loops](#nested-for-loops)
  * [Example 1: Simple Pattern](#example-1-simple-pattern)
  * [Example 2: A More Complex Pattern](#example-2-a-more-complex-pattern)

## What is a Loop

Loops are used when we want to execute a code statement, or several code statements, multiple times. With different loops that are available in programming we can choose to execute a loop a given number of times, or we can keep looping repeatedly until a certain condition is met.

&nbsp;
&nbsp;

### Why use Loops?

If, for example, we wanted to print all the numbers between 1 and 5 on a new line, we could use ```cout``` without too much trouble:

```C++
cout << 1 << endl;
cout << 2 << endl;
cout << 3 << endl;
cout << 4 << endl;
cout << 5 << endl;
```

But imagine if we wanted to print all numbers between 1 and 1000. One thousand ```cout``` statements would be incredibly inefficient to programme.

This is where loops come in.

&nbsp;
&nbsp;

## The While Loop

A while loop enables us to loop WHILE a certain condition is TRUE. We can visualise this using the following flow diagram:

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/while-loop.png">
</p>

Notice that this flow diagram is not too dissimilar to the flow diagram for an IF statement. However, with the while loop after the code block is executed the program returns to the condition and checks it again, repeating this process until it evaluates to false. The IF statement only checks the condition once.

The while loop has the following features:

* *A Condition:* Like the IF statement the while loop is driven by a condition. As long as that condition evaluates to TRUE, the loop will continue to run
* *A Code Block:* Statements that will execute if the condition evaluates to TRUE
* *A Loop:* The code block will execute indefinitely until the condition evaluates to FALSE

We can express a while loop in pseudocode like this:

```
while ( condition ) {
	do something;
}
```

&nbsp;
&nbsp;

### Back to Counting

So how can we write a while loop that counts from 1 - 10000, therefore avoiding the messy scenario described above? First we need to declare a variable that will be used to keep track of the current count. We can then use this variable as the basis of the loops condition, as well as using it to output the desired values.

```C++
int count = 1;
while(count <= 1000){
    cout << count << endl;
    count++;
}
```

Note the features of this while loop:

* *The condition:* While count is less than or equal to 1000 the loop will continue to run.
* *Code Block:* This contains two statements. A ```cout``` statement that prints to console the current value of count followed by ```count++```, which adds 1 to the value of count each time the loop runs.

The variable count will continue to increment by 1 until it reaches 1001. At this point the condition ```count <= 1000``` will no longer evaluate to TRUE and we exit the loop.

&nbsp;
&nbsp;

### Iterations

An iteration is one cycle of the while loop. So in our counting example there are 1000 iterations.

&nbsp;
&nbsp;

## Infinite Loops

Try removing the line ```count++;``` from the loop above. What do you notice?

When you run the program without this line you will encounter a situation where your loop runs infinitely. This is called an Infinite loop. This happens as when the line is removed ```count``` is never modified and is therefore always less than 1000, resulting in the condition always evaluating to TRUE

Sometimes this is useful - for example when coding for the web when you often want to always be listening for an input from a web server. However in most occasions, we find that we should work to avoid them. Therefore, you need to be careful when designing loops to ensure there is a way for the loop to exit or break. In most instances this can be done by having some code that will result in the condition evaluating to FALSE, just like ```count++``` does in the original example.

&nbsp;
&nbsp;

## The Break Statement

Another way we can stop a loop from iterating is with the break statement. When a break statement is used within a loop, we 'jump out' of the loop and continue with the rest of the programme. We saw the break statement in the last chapter on switch statements where its action is the same; When the program encounters a break in a switch it 'jumps out' of the statement and continues with the rest of the programme.

Suppose we want to count up to a given number, however that number is defined by user input. In this case we can't deploy the solution seen in the previous example.

Why not? There are two reasons:

* We don’t know what the user’s inputted number is going to be, so setting a condition of e.g. count <= 10000 will likely not stop at the user’s chosen number
* This method will only capture numbers up to 10000. The user’s number may be higher

```C++
//this will not work
int count = 1;
while(count <= 1000){
    cout << count << endl;
    count++;
}
```

One solution to this problem is to use the break statement. It may look something like this:

```C++
cout << "Enter a whole number: " << endl;
int userNum;
cin >> userNum;

int count = 1;
while(true){
   cout << count << endl;
   if(count == userNum){
       break;
   }
   count++;
}
```

The operation is as follows:

* ```cin``` is used to collect the user’s inputted number. This is stored as ```userNum```
* The condition of the while loop is TRUE. This means it will run indefinitely.
* With ```cout``` we print the value of our ```count``` variable on each iteration.
* We then check to see if our ```count``` variable is equal to ```userNum```. If it is we break the loop thus forcing an exit. Otherwise we increment count and run the iteration again

Note that not every loop will require a break, just in instances where you need to force exit a loop if a certain condition(s) is met while it’s executing. 

*In fact the above problem can also be solved without a break, can you figure out how?*


&nbsp;
&nbsp;

## The Continue Statement

As discussed above when used in a loop the ```break``` statement terminates the loop and prevents any further iterations occurring. We can also use a ```continue``` statement which has similar behaviour. Yet, rather than prevent any further iterations it breaks the current iteration then continues with the next.

The following two examples illustrate the difference between the break and continue

```C++
//using a break statement
int num = 0;
while(num < 10){
  num++;//increase num
  if(num % 2 == 0){//check if num is even
    break;//break loop
  }
  cout << num << endl;//output value of num
}
```

```
Expected output:
1
```
The above loop only outputs a single value as on the next iteration the IF condition will be true and the break statement is encountered causing the loop to stop.

```C++
//using a continue statement
int num = 0;
while(num < 10){
  num++;//increase num
  if(num % 2 == 0){//check if num is even
    continue;//continue at next iteration of loop
  }
  cout << num << endl;//output value of num
}
```

```
Expected output:
1
3
5
7
9
```
This second example outputs more numbers, although only odd values, as the continue statement is encountered every time ```num``` is even, which restarts the loop at the start of the next iteration.

## Do While loops

The do while loop is a variant of a while loop, which evaluates the condition at the bottom of the loop instead of the top. This means that the loop will execute at least once, regardless of whether or not the condition evaluates to TRUE or FALSE. This is demonstrated visually in the flowchart below. Notice how in comparison to the earlier while loop diagram the process of execution is flipped.

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/dowhile.png">
</p>

We can express a do while loop in pseudocode like this:

```
do {  
	do something;
} while ( condition );
```

Note here that the code block to be executed still appears within curly braces. Also note the semicolon at the end of the condition.

&nbsp;
&nbsp;

### Example: Game Music

Game music often loops because we don’t know how long a player will stay in a particular location. Remember Sonic the Hedgehog (1991)? When you get to the point of fighting Dr Robotnik boss battle music starts playing. This 30 second sequence will continue to loop until Sonic defeat’s him, or is killed.

A do while loop is a valid mechanism for controlling audio playback in this situation as we always want to begin the battle music at least once and continue doing so as long as the player remains in the battle arena.

```C++
bool battleRobotnik = false;
// at this point Sonic enters the battle arena
do {
   battleRobotnik = true;
   cout << "Play battle music" << endl;
} while (battleRobotnik==true);
cout << "Stop battle music" << endl;
```

We could improve this implementation by doing two things:

* Getting rid of redundancies by changing ```battleRobotnik == true``` to the shorthand ```battleRobotnik```
* Adding an if statement to exit the loop when the player either dies or defeats Robotnik

```C++
bool battleRobotnik = false;
bool sonicDead = false;
bool robotnikDead = false;
// at this point Sonic enters the battle arena
do {
   battleRobotnik = true;
   cout << "Play battle music" << endl;
   if (sonicDead || robotnikDead) {
       battleRobotnik = false;
   }
} while (battleRobotnik);
cout << "Stop battle music" << endl;
```

&nbsp;
&nbsp;

## Basic Error Checking with loops

```cin.fail()``` is an in built C++ method that offers a great way of doing some simple error checking. The input stream (```cin```), knows what type of data it is expecting when awaiting user input. If a letter is entered when a number is expected, then an error flag will be placed on the input stream and ```cin.fail()``` will evaluate to true. This means you can use ```cin.fail( );``` as the conditional check in an if statement, or even better a while loop to keep checking user input until valid data is entered.

However, can't just use ```cin.fail()``` on it's own. Within the code block after the conditional check you then need to clear the error flag ```cin.clear( );``` and ignore what is left in the input stream as the invalid data will still be there. ```cin.ignore(256, '\n');``` tells the input stream to ignore the next 256 characters, or the first new line character it encounters (whichever comes first). As the user will have hit enter when inputting the data it should encounter the new line character first. Now you are safe to ask the user for new data. See the example below:

```C++
cout << "Enter a number: " << endl;
int x;
cin >> x;
while (cin.fail()) {
    cout << "Invalid input" << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> x;
}
cout << "Input number: " << x << endl;
```

*Important note:* The error flag will only occur if the data is of the wrong type (e.g. char when expecting an int). Therefore, cin.fail( ) won’t work for checking if a number is out of range (e.g. 22 when only numbers below 10 are valid), neither will it work to reject numeric input from strings or chars as numbers have a valid string or char representation. You would need an alternative error checking method for this (e.g. an if statement check to validate the range, or check if the data is a letter - ```isalpha()```).

&nbsp;
&nbsp;

## The For Loop

A for loop is very similar to a while loop. The difference is subtle.

You tend to use WHILE loops when you don’t know how many iterations of the loop there is going to be. For example, if you are writing a quiz program you might not know how many times a player will get a question wrong.

You use FOR loops when you do know how many iterations of the loop there needs to be. For example, if you are writing a program that prints every character in the word “Computing”, you know that you will need to execute the loop 9 times.

&nbsp;
&nbsp;

### While Loops vs For Loops

The following code snippets show how a while loop that counts from 0 to 10 compares to a for loop that counts from 0 to 10.  

*While Loop*
```C++
int count = 0;
while(count <= 10){
  cout << count << endl;
  count++
}
```

*For Loop*
```C++
for(int count = 0; count <= 10; count++){
  cout << count << endl;
}
```

You can see that in these examples the code has very similar components. They both contain:

* *Initialisation:* A variable to store the current count. This is the starting point of the loop  
  ```
  int count = 0
  ```

* *Condition:* The condition in which the loop will keep iterating                                                 
  ```
  count <= 10
  ```

* *Incrementation:* How much the variable count will increase on each iteration of the loop                          
  ```
  count++
  ```   

Whilst they both have these three components, the difference is that the FOR loop all these components included together within the loop 'header'. The while loop in comparison has to include the initialisation and incrementation seperately.

To write a FOR loop these three components are included within the loops 'header' (between parentheses) and separated by a semicolon.

```C++
for(initialisation; condition; incrementation){
	//code to run on loop
}
```

When executing the for loop acts in the same way as a WHILE loop in that it will continue to run as long as the condition evaluates to TRUE.

Typically the for loops initialisation variable will start at 0 and the incrementation will go up by one. However this does not have to be the case and you can start at any value and increment (or decrement) by any value you wish. For example

```C++
//THIS LOOP WILL COUNT DOWN FROM 10 TO 0
for(int count = 10; count >= 0; count--){
  cout << count << endl;
}
//THIS LOOP WILL OUTPUT MULTIPLES OF 5 FROM 0 TO 100, ITERATING 20 TIMES IN TOTAL
for(int count = 0; count <= 100; count+=5){
  cout << count << endl;
}
```


&nbsp;
&nbsp;

## Nested For loops

A nested loop is a (inner) loop that appears in the loop body of another (outer) loop, much like nested IF statements that we saw in chapter 2. If you nest one loop inside another the nested loop will run all its iterations every time the outer loop iterates. Lets see this in action with an example...

&nbsp;
&nbsp;

### Example 1: Simple Pattern

```C++
for (int i=0; i<5; i++) {  //execute the outer loop 5 times  
    for (int j=0; j<5; j++) {//execute inner loop 5 times for every iteration of outerloop
        cout << "\*" << endl;   //print 5 stars
    }
    cout << endl; //print to a new console line
}
```

The above program prints the following pattern to console:

```
*****
*****
*****
*****
*****
```

In this example we have one loop nested inside another. The outer loop is set to run 5 times. On each iteration the outer loop exectues the inner loop, which itself runs 5 times to print 5 stars in a row, then a new line is printed to the console after the inner loop finishes. The process of exectuion for this example is as follows.

```
//outer loop iteration 1
Run outer loop as i (0) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 2
Run outer loop as i (1) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 3
Run outer loop as i (2) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 4
Run outer loop as i (3) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 5
Run outer loop as i (4) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

Stop outer loop as i (5) is not less than 5
```

Therefore in total the inner loop runs 25 times, 5 times for each iteration of the outer loop.

Note that we have used the letters ```i``` and ```j``` to keep track of what each loops current ‘count’ is. It is not crucial that you use ```i``` and ```j```, however these variables are typically used in loops.

&nbsp;
&nbsp;

### Example 2: A More Complex Pattern

We can modify the above example so that the following pattern is printed:

```
*****
****
***
**
*
```

```C++
for (int i=1; i<=5; i++) {  //execute the inner loop 5 times  
    for (int j=i; j<=5; j++) {
        cout << "\*" << endl;   //print 5 stars
    }
    cout << endl; //print to a new console line
}
```

The difference between this program and the one seen in Example 1 is subtle. Look at the inner for loop and you will see that the initialisation component is not ```int j = 1;``` but instead ```int j = i;```  It utilises the ```i``` variable from the outer loop. This means that on the first iteration of the loop the inner loop begins at ```int j = 1;``` but on the second iteration ```int j = 2;``` and on the third iteration ```int j = 3``` and so on. Because the starting point for the inner for loop increases by ```+1``` on each iteration of the outer loop, the number of printed stars will also decrease by ```-1``` on each iteration.

