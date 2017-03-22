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

	//constants are defined with const
	//these cannot be changed
	//also constant variables have a capital letters
	
	//double contains decimal values
	//and are considered more accurate than floating points
	const double PI = 3.1421592634f;
	
	//char is used for a single character
	//also holds one byte in memory
	char MyGrade = 'A';
	
	//boolean are used for true or false statements
	//bool variables always start with is
	bool isHappy = true;

	//int are whole numbers without decimal values
	//the hold 4 bytes in memory
	int MyAge = 39;

	//float are like doubles but are accurate only to 
	//about 6 decimal places
	float FavNum = 3.14158f;

	//to display it
	cout << "Favorite Number is: " << FavNum << endl;

	//other data types
	//are;
	//: short int = 2 bytes
	//: long int = 4 bytes
	//: long long int = 8 bytes
	//: unsigned int = 4 bytes
	//: long double = 8 bytes

	//to get the size of a data type
	cout << "Size of int " << sizeof(MyAge) << endl;
	cout << "Size of char " << sizeof(MyGrade) << endl;
	cout << "Size of bool " << sizeof(isHappy) << endl;
	cout << "Size of double " << sizeof(PI) << endl;
	cout << "Size of float " << sizeof(FavNum) << endl;

	return 0;
}
