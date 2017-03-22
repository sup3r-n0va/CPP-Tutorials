#include <iostream>	//used for input and output
#include <vector>	//vector library
#include <string>	//string library
#include <fstream>	//for file input and output

using namespace std;

int main()
{

	/// Ternary Operator ///
	
	//Performs an assignment based on a condition
	// variable = (condition) ? if true : if false
	
	int LargestNum = (5 > 2) ? 5 : 2;

	cout << "The biggest number is " << LargestNum << endl;
	

	return 0;
}
