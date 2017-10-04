#include <iostream>

using namespace std;

int main(){
	cout << "Hello World " << endl;
	return 0;
}

typeDef(){
/*====
In c++ you can actually add another name for an existing data type using typedef
======*/
	typedef int feet; //using typedef I am telling c++ that 'feet' is the equivilant of saying 'int'
	feet distance = 5; //I can use 'feet' as the data type and it makes the variable 'distance' an 'int' type variable

}

void dataTypes(){
	int	number_a = 0; 		//int stands for 'integer' which is a whole number value (either positive or negative)
	double	number_b = 3.14; 	//double stands for 'double floating point' which is for longer numbers as well as decimals
	bool	state_a  = false;	//bool stands for 'boolean' which only has two values - 'true' or 'false'
	string  name	 = "Antonio";	//string doesn't stand for anything, but think of it as a string of characters
}

void comments(){
/*
This is a multiline comment
*/

//This is a single line comment
}
