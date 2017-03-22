#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{


	///   Arrays ///
	
	//arrays store multiple values of the same type

	//you must provide a data type and size of array
	int MyFavNums[5];

	//you can declare and add values in one step
	int BadNums[5] = {4, 13, 45, 34, 23};
	
	//the first item in the array has the label (index) of 0
	cout << "Bad number is 1: " << BadNums[0] << endl;

	//you can create multidimensional arrays
	char MyName[5][5] = {{'S', 'u', 'p', '3', 'r'} , {'N', '0', 'v', 'a'}};

	//to display the 2nd letter in the second array
	cout << "The second letter in the second array is : " << MyName[1][1] 
		<< endl;

	//you can change a value in a array using its index
	MyName[1][3] = 'e';

	cout << "New value is : " << MyName[1][3] << endl;

	return 0;
}
