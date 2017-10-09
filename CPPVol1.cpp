#include <iostream>

using namespace std;

int main(){
	cout << "Hello World " << endl;
	return 0;
}
/* Notes to inplement later
	- Defining Constants with 'const' and '#define'
	- Using the 'extern' syntax with methods and variables
	- Modifier Types
	- Storage Classes
*/

void logicalOperators(){
/*====
In c++ there are three logical operators. These are used to compare returned boolean values (compares 'true's and 'false's)
	&& This is the 'and' operator ; Both sides of && have to be true for the whole comparison to return true
	|| This is the 'or' operator  ; Only one side of || has to be true for the whole comparison to return true
	!  This is the 'not' operator ; This returns the opposite boolean value of the 'attached' variable
The order of precedence is as follows:
	NOT (!)
	AND (&&)
	OR  (||)
======*/
	boolean test_alpha = true && true;	//Returns true
	boolean test_beta  = true || true;	//Returns true
	boolean test_gamma = !true;		//Returns false
}

void relationalOperators(){
/*====
Another way to compare variables is by using relational operators
	== If the two values are equal, this returns true. If they are not equal, then it returns false
	!= If the two values are equal, this returns false. If they are not equal, then it returns true
	>  If the left variable is greater than the right, this returns true. If they are not equal, then it returns true
	<  If the left variable is greater than the right, this returns false. If they are not equal, then it returns false

	>= If the left variable is greater than or equal to the right, this returns true
	   ONLY when the left side is less than the right then this returns false

	<= If the left variable is less than or equal to the right, this returns true
	   ONLY if the right side is less then the left side will this return false

======*/
}

void mathOperators(){
/*====
There are a few basic math operators
	+ is for adding two operands (values)
	- is for subtracting two operands (values)
	* is for multiplying two operands (values)
	/ is for dividing two operands (values)
	% is called modulus. This divids two operands and returns the remaining value
	++ is used to increment a value by one
	-- is used to decrement a value by one
======*/

}
void typeDef(){
/*====
In c++ you can actually add another name for an existing data type using typedef
======*/
	typedef int feet; //using typedef I am telling c++ that 'feet' is the equivilant of saying 'int'
	feet distance = 5; //I can use 'feet' as the data type and it makes the variable 'distance' an 'int' type variable
}

void basicDataTypes(){
	int	number_a = 0; 		//int stands for 'integer' which is a whole number value (either positive or negative)
	double	number_b = 3.14; 	//double stands for 'double floating point' which is for longer numbers as well as decimals
	bool	state_a  = false;	//bool stands for 'boolean' which only has two values - 'true' or 'false'
	string  name	 = "Antonio";	//string doesn't stand for anything, but think of it as a string of characters
}

void comments(){
/*
This
is
a
multiline
comment
*/
//This is a single line comment
}
