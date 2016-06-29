// operating with variables

#include <iostream>
#include <string>
//using namespace std;

int main()
{
	// declaring variables
	int a;
	int result;
	
	// process
	a= 5;
	int b(2);
	a= a + 1;
	result = a - b;
	
	// print out the result
	std::cout << result << std::endl;
	
	//terminate the program
	//return 0;
	
	//string stuff
	std::string mystring;
	mystring = "This is a string.\n";
	std::cout << mystring;
	return 0;
}
