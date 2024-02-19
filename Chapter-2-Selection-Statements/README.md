# Chapter 2 - Selection Statements

* [Control Flow - IF statements](#control-flow---if-statements)
  * [Relational Operators](#relational-operators)
  * [The Importance of IF statements](#the-importance-of-if-statements)
  * [Building blocks of an IF statement](#building-blocks-of-an-if-statement)
* [IF Else Statements](#if-else-statements)
  * [Building blocks of an IF ELSE statement](#building-blocks-of-an-if-else-statement)
* [Checking Multiple Conditions with ELSE IF](#checking-multiple-conditions-with-else-if)
* [Compound Conditions](#compound-conditions)
  * [Logical AND](#logical-and)
  * [Logical OR](#logical-or)
  * [Logical NOT](#logical-NOT)
* [Nested IF Statements](#nested-if-statements)
* [The Switch Statement](#the-switch-statement)
  * [The Switch Statement Components](#the-switch-statement-components)
  * [Default Cases](#default-cases)
  * [Grouping Cases Together](#grouping-cases-together)
  * [Why use a switch instead of an IF statement?](#why-use-a-switch-instead=of-an-if-statement)


## Control Flow - IF Statements

### Relational Operators

At the end of the last chapter you were introduced to relational operators. These operators can be used to make decisions in computer programs, e.g. if something is true do this, otherwise if its false do that. The key relational operators are:

```C++
<	//less than
> 	//greater than
>= 	//greater than or equal to
<=	//less than or equal to
== 	//equality - is the same as
!= 	//inequality - is not the same as
```

### The Importance of IF statements

We can make use of relational operators to construct IF statements. IF statements are a fundamental technique in computer programming, which allow us to write ‘decisions’ into our programs. It is possible to make quite complex programs using just variables, operators and if statements.

In its basic form the IF statement allows us to execute a block of code **IF** a condition is met.

Take a look at the below flowchart for an IF statement. In this flowchart we see how the program will test a condition (made using the relational operators described above). If this condition is **true** we will run the block named *Outcome 1*. If the condition is not true the program bypasses this code block and terminates.

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/if_flow.png">
</p>

### Building blocks of an IF statement

We can write an if statement in pseudocode like this:

```
IF (condition)
   code block to be executed if the condition is true
END IF
```

The building blocks are therefore:

* A condition: this evaluates as either TRUE or FALSE
* True code block: the code that executes if the condition evaluates to TRUE

In C++ syntax an if statement can be written as follows

```C++
int num = 6;
if(num > 10){
  cout << "Num is greater than 10" << endl;
}
```

Note that the condition is included in parentheses after the IF keyword and the condition is made up of an expression which compares two values. If the expression evaluates to TRUE we execute the statements included in the conditional statements block (between curly braces). If we were to run the above code, nothing would happen as the condition is false (6 is NOT greater than 10).

&nbsp;
&nbsp;

## IF ELSE Statements

We can extend the IF statement by adding an ELSE block. The ELSE block allows us to run some code if the condition is false


Below we can see a flowchart diagram for an if-else statement:

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/IF-ELSE-Flowchart.png">
</p>

Notice in this flowchart we have a second outcome in comparison to the earlier diagram. This second outcome will execute if the condition is FALSE
&nbsp;
&nbsp;

#### Real World example

This following example compares a boolean variable named ```isRaining```. If ```isRaining``` is TRUE the programme will print “Take an umbrella”, otherwise it will print “Leave the umbrella”.

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/is-raining.png">
</p>

* The **condition** here is ```isRaining == true```
* The **code block** in green will execute if ```isRaining == true``` is a TRUE statement
* Else (otherwise) the code block in orange will execute.

In this example we can see that the boolean variable ```isRaining``` is initialised false at the beginning of the programme. So, is the condition ```isRaining == true``` a TRUE or FALSE statement?

It is FALSE. Therefore the programme will execute the code block in orange and print "Leave the umbrella" to console.

&nbsp;
&nbsp;

### Building blocks of an IF ELSE statement

We can write an if-else statement in pseudocode like this:

```
IF (condition)
   code block to be executed if the condition is true
ELSE
   code block to be executed if the condition is false
END IF
```

The building blocks are therefore:

* A condition: this evaluates as either TRUE or FALSE
* True code block: the code that executes if the condition evaluate to TRUE
* Else code block: the code that executes if the condition evaluates to FALSE

Our real world umbrella example code would therefore look like:


```C++
#include <iostream>
using namespace std;

int main() {
	bool isRaining = false;

	if(isRaining == true){
		cout << "Take an Umbrella" << endl;
	}else{
		cout << "Leave the Umbrella" << endl;
	}

  return 0;
}
```

Note that the else section is optional and if you don't need to perform any actions if the statement is FALSE then you can leave it out.

__*Important Note: remember code within blocks should be ‘indented’ to make the if-else statement easier to read.*__

&nbsp;
&nbsp;

## Checking Multiple Conditions with ELSE IF

In the previous examples we have used the ELSE keyword to create a block of code that will run if our IF condition is FALSE. But what if we wanted to do some additional conditional checks if the first one is false? In this instance we can use the ELSE-IF keyword to create additional conditions.

Take a look at the following example. In this program we want to output a greeting depending on the time of day. If it’s before 12 (noon) we want to say “Good Morning”. However, we then want more than one other greeting for times after 12 to handle the afternoon and evening. This means we can’t just use an ELSE block.

Instead we need to create a second condition to check if the time is before 6pm (18:00) to handle the afternoon greeting and have a final terminating ELSE block for the evening greeting for all times after 6pm.

An IF statement can have multiple conditional checks by continuing to add ELSE-IF blocks. The program will evaluate the conditions in order and execute the block of code relating to the first condition that evaluates as TRUE, all other blocks will be ignored. If none of the conditions are TRUE the ELSE block will run, or if no ELSE block is included nothing will happen.

```C++
#include <iostream>
#include <string>
using namespace std;


int main(){
    int time = 8;
    string greeting;

    if (time < 12) {
        greeting = "Good morning";
    } else if (time < 18) {
       greeting = "Good afternoon";
    } else {
       greeting = "Good evening";
    }
    cout << greeting << endl;
}
```

&nbsp;
&nbsp;

## Compound Conditions

Sometimes an IF-ELSE statement needs more than one condition at any one time. For example, if we want two things to be TRUE for some code to run.

Think about the scenario where we want to make a cheese sandwich. We need to have both bread and cheese to do this. Without one or the other, it isn’t a sandwich.

### Logical AND

If we want to program this scenario, we need a logical AND operator (&&). This allows us to have two conditions in the IF statement. With logical AND all the conditions must be TRUE for the the code block to run. In pseudocode, a logical AND compound condition looks like this:

```
if ( condition1 && condition2 ) {
	do something;
}
```

#### Example: Cheese sandwich

As for our cheese sandwich example this is how it might be coded.
```C++
bool haveBread = false;
bool haveCheese = true;
if(haveBread == true && haveCheese == true){
  cout << "You can make a cheese sandwich" << endl;
}else{
  cout << "Sorry we don't have all of the required ingredients" << endl;
}
```

*How might you extend the above code to inform the user which ingredient is missing?*

#### Example: Goldilocks

In this example the compound IF statement is checking for the perfect temperature of porridge: 40 degrees is too cold, and 60 degrees is too hot. The programme prints "That’s just right!" when the porridge is more than 40 degrees, but less than 60 degrees.

```C++
int porridgeTemperature = 56;

if (porridgeTemperature > 40 && porridgeTemperature < 60 ) {
   cout << "That's just right!" << endl;
}
```

&nbsp;
&nbsp;

### Logical OR

What about if we want an instruction to execute if one condition OR another is TRUE. Well to do this we need a logical OR operator. We use two 'pipes' for this operator ```||```

#### Example: The Bouncer

A nightclub only accepts two forms of ID: A passport OR a Driving Licence. A student who wishes to enter the club has a passport but no driving licence, but as only one of these things needs to be TRUE they may enter the club.

```C++
bool hasPassport = false;
bool hasDrivingLicense = true;

if ( (hasPassport == true) || (hasDrivingLicense == true) ) {
	cout << "You may enter the club" << endl;
} else {
	cout << "Sorry, I can't let you in" << endl;
}
```

You could rewrite this slightly differently. Note the conditions of the IF statement below. You don’t need to write hasPassport == true. Instead you can simply write hasPassport.

```C++
bool hasPassport = false;
bool hasDrivingLicense = true;

if ( (hasPassport) || (hasDrivingLicense) ) {
	cout << "You may enter the club" << endl;
} else {
	cout << "Sorry, I can't let you in" << endl;
}
```

&nbsp;
&nbsp;

### Logical NOT

The Logical NOT inverts the result of a condition. For example, if you put an exclamation mark in front of TRUE, it becomes FALSE.

#### Example: Brothers

This example compares the ages of two brothers. If 'brotherA' is older the system will print "Brother A is older". Note that the comparison asks whether 'brotherA' is younger than 'brotherB' but the NOT operator ```!``` inverts the condition. This means the expression is asking if brotherA is NOT younger than brotherB which in the below example is true.

```C++
int brotherA = 15;
int brotherB = 12;
if ( ! (brotherA < brotherB) ) {//use of NOT operator inverts conditional expression
	cout << "Brother A is older" << endl;
}
```

&nbsp;
&nbsp;

## Nested IF statements

A nested IF statement is one IF statement wrapped around another. This is useful when you want to make two decisions in a row, where the second decision relies on the first. In pseudocode the nested IF statement looks like this:

```
if ( condition1 ) {
	if ( condition 2 ) { //This if statement is nested inside another
		do something;
	} else {
		do something;
	}
} else {
	do something;
}
```

#### Example: Zombie Attack!

The world is crumbling following a recent outbreak of the DX TYPE-2 virus. The dead are rising and you must decide whether to fight or flee. You are sheltered in a small cabin in the woods when you hear a knock on the door. You approach the door…

* First Question: Is there a zombie at the door?
* Result: There is a either a zombie at the door or a civilian in need of help.
* Second Question: If there is a zombie at the door you must decide to fight or flee. If there is not you let the civilian in.

We can write the above situation using a nested if-else statement.

```C++
bool zombieAtDoor = true;
bool decideToFight = false;
// This is the nested if-else statement that governs the decisions
if (zombieAtDoor == true) {
	if (decideToFight == true) {
		cout << "Grab a weapon and fight for your life!" << endl;
	} else {
		cout << "Run away, as fast as you can!" << endl;
	}
} else {
	cout << "Let the civilian in" << endl;
}
```

But remember where a condition == true, we can remove the == true bit to make the code easier to read. So we could rewrite this as:

```C++
bool zombieAtDoor = true;
bool decideToFight = false;
// This is the nested if-else statement that governs the decisions
if (zombieAtDoor) {
	if (decideToFight) {
		cout << "Grab a weapon and fight for your life!" << endl;
	} else {
		cout << "Run away, as fast as you can!" << endl;
	}
} else {
	cout << "Let the civilian in" << endl;
}
```
&nbsp;
&nbsp;

## The Switch Statement

The switch statement enables variation in a program similar to an IF statement. They are useful when we have so many different options and a long IF-ELSE statement becomes cumbersome to read and write.

The switch statement works by evaluating a single expression (value). This differs from an IF statement which compares two values. The switch evaluates the given expression against a series of possible cases and executes the code in the matching case.

In pseudocode:

```
switch ( expression ) {
    case 1:
	  do something;
	  break;
    case 2:
	  do something;
	  break;
    default: 	
	  if other cases don't match - do this;
}
```

&nbsp;
&nbsp;

### The switch statement components:

* The expression: This is the variable you are testing against, it can be an ```int``` or ```char```
* Case:           What to do for each possible value of the variable tested
* Break:          To show where a case ends
* Default:        The case that executes if no other cases match the variable value

Switch statements offer similar functionality to the IF-ELSE conditional. The switch statement runs through a series of cases and if a cases matches the expression the case's code block is executed until a break is reached. 

The break keyword acts as a termination point for the statement. When encountered the program exits the switch statement and continues execution after the statement ends (e.g. after the closing curly brace).

Be aware that if a case does not include a break the following cases will also be executed until a break is reached. This can cause errors in functionality but also be useful in certain situations (as explained later).

A default case can be included that runs if none of the previous case's match the expression (similar to a terminating ELSE in an IF statement). The default usually does not contain a break as this is the last case encountered and the switch is terminating anyway.

The switch statement is limited in that it can only take a single exact value such as ```int``` and ```char``` values. It cannot take a conditional expression (e.g. x >= 10), or string values.

Take a look at the following examples to see the switch statement in action. The first evaluates a char (note the single quotes wrapping the case values) and the second evaluates an int.

#### Example: Sugar

```C++
cout << "Would you like sugar?" << endl;
char input;
cin >> input;

switch (input) {
    case 'Y':
        cout << "Adding sugar..." << endl;
	   break;
    case 'N':
	   cout << "No sugar requested..." << endl;
	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

#### Example: Menu
```C++
cout << "What would you like to do today?" << endl;
cout << "1: View Balance" << endl;
cout << "2: Withdraw Money" << endl;
cout << "3: Deposit Money" << endl;
cout << "4: Exit" << endl;
int userChoice;
cin >> userChoice;

switch (userChoice) {
    case 1:
        cout << "You have £0 sorry!" << endl;
	   break;
    case 2:
	   cout << "Loading money withdrawl system please wait..." << endl;
	   break;
     case 3:
 	   cout << "Loading money deposit system please wait..." << endl;
 	   break;
     case 4:
 	   cout << "Terminating program" << endl;
 	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

&nbsp;
&nbsp;

### Default cases

In the above examples you will notice a default case at the end of the switch statement. This case will run if the expression does not match any of the cases (e.g. if the user enters 5 in our second example). This is similar to how the ELSE works in an IF ELSE statement. The default is usually placed at the end of the switch statement and therefore does not need to include a break (as we are at the end anyway). The default is optional and only required if you wish to execute code if none of the cases match (e.g. output an error message).

&nbsp;
&nbsp;

### Grouping Cases Together

As mentioned above when a case value matches the switch expression the case statements will be executed until a break is found. If no break is included the switch statement will continue to run the code in subsequent cases until one is found. In certain instances this can lead to errors or unexpected results if the break is accidentally left out. In other instances being able to omit the breaks from cases can be useful.

For example, if multiple options in your switch statement need to execute the same code, rather than duplicate the lines of code you can group cases together by leaving out the break. Let's say we wanted to account for both upper and lower case inputs in our sugar example we can group together the cases for the upper and lower case letters:

```C++
cout << "Would you like sugar?" << endl;
char input;
cin >> input;

switch (input) {
    case 'Y':
    case 'y':
        cout << "Adding sugar..." << endl;
	   break;
    case 'N':
    case 'n':
	   cout << "No sugar requested..." << endl;
	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

&nbsp;
&nbsp;

### Why use a switch instead of an IF statement?

When you have many options that require checking, the switch statement can provide greater clarity and readability. It can also offer some minor performance improvements compared to a long IF-ELSE statement.

However, as the switch statement can only accept single exact values in the expression there will be instances where you will have to use an IF-ELSE statement (e.g. for evaluating ranges or compound conditions).

Ultimately the decision on which to use can come down to programmer preference. If you find one easier to understand than the other then use the easier tool.
