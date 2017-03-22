#include <iostream>	//used for input and output
#include <vector>	//vector library
#include <string>	//string library
#include <fstream>	//for file input and output

using namespace std;

int main()
{

	////  If Statements ///

	//there are 6 comparison operators in c++
	//these are;
	// == , != , > , < , >= , <=
	
	//there are also logical operators
	//these are and. or , not
	//which defined in c+= as;
	// && (for and) , || (for or), !(for not)


	int Age = 70;

	int AgeLastExam = 16;
	bool isNotIntoxicated = true;

	if((age >= 1) && (age < 16)) {
		cout << "You can't drive!" << endl;
	}
	else if(!isNotIntoxicated) {
		cout << "You can drive!" << endl;
	}
	else if(age >= 80 && ((age > 100) || ((age - AgeLastExam) > 5))) {
		cout << "You can't drive!" << endl;
	}
	else {
		cout << "You can drive!" << endl;
	}

	return 0;



}




