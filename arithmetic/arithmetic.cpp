//This is single line comment
/* 
This is a multiline comment
*/
#include <iostream>   	//used for input and output
#include <vector>	//vector libraries
#include <string>	//string library
#include <fstream>	//for file file input and output

using namespace std;

int main()
{

	//to dislay text on the screen you
	//use cout
	cout << "Hello World" << endl;

	//Arithmetic//
	
	//the arithmetic operators are + , -, *, /, %, ++, --
	//example
	cout << "5 + 2 = " << 5 + 2 << endl;
	cout << "5 - 2 = " << 5 - 2 << endl;
	cout << "5 * 2 = " << 5 * 2 << endl;
	cout << "5 / 2 = " << 5 / 2 << endl;
	cout << "5 % 2 = " << 5 % 2 << endl;
	
	//the following are shortcuts for increment and decrements
	int Five = 5;
	
	//increment by one
	//so for the increment on the right side 
	//it will perform addition after it gets 
	//the value from the left side
	cout << "5++ = " << Five++ << endl;
	//and for the increment on the left side 
	//it will first add the value and than 
	//perform the increment
	cout << "++5 = " << ++Five << endl;

	//decrement by one
	//so for the decrement on the right side 
        //it will perform subtraction after it gets 
        //the value from the left side
	cout << "5-- = " << Five-- << endl;
	//and for the decrement on the left side 
        //it will first subtract the value and than 
        //perform the decrement
	cout << "--5 = " << --Five << endl;
	
	//another short notation
	Five += 6; //this is the same as five = five + 6

	//you can convert one data type to another by casting
	//char , int, float , double
	cout << "4 / 5 = " << 4 / 5 << endl; //this will will equal to 0
	cout << "4 / 5 = " << (float) 4 / 5 << endl; //this convert it to a float


	return 0;
}
		


