#include <iostream>	//used for input and output
#include <vector>	//vector library
#include <string>	//string library
#include <fstream>	//for file input and output

using namespace std;

int main()
{

	/// Switch Statement ///
	
	//switch is used mostly when you have limited number of
	//possible options
	int GreetingOption = 2;

	switch(GreetingOption) {
		case 1 :
			cout << "Bonjour!" << endl;
			break;
		case 2 :
			cout << "Hola!" << endl;
			break;
		case 3 :
			cout << "Hallo!" << endl;
			break;
		default :
			cout << "Hello" << endl;
	}

	


	return 0;

}
