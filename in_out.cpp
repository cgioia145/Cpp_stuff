// I/O example

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	//int i;
	//cout << "Please enter an integer value: " ;
	//cin >> i;
	//cout << "The value you entered is: " <<  i;
	//cout << " and its double is " << i*2 << endl;
	
	string mystr;
	cout << "What's your name son? ";
	getline(cin, mystr);
	cout << "Hello " << mystr << endl;
	cout << "What is your favorite color? ";
	getline(cin, mystr);
	cout << "I like " << mystr << " too!\n";
	
	return 0; 
}
