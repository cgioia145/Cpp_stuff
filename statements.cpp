//statements and flow control

#include <iostream>

using namespace std;

int main()
{
	//if-else statement
	//if (x > 0) 
	//	cout << "x is positive";
	//else if (x < 0)
	//	cout << "x is negative";
	//else
	//	cout << "x is 0";
	
	//while loop
	//int n = 10;
	//while (n>0) {
	//	cout << n << ", ";
	//	--n;
	//}
	//cout << "liftoff!!\n";
	
	//do-while loop
	int main ()
{	
	string str;
	do {
		cout << "Enter text: ";
		getline (cin,str);
		cout << "You entered: " << str << '\n';
	} while (str != "goodbye");
}

	//for loop
	for (int n = 10; n>0; n--) {
		cout << n << "\n";
	}
	cout << "liftoff!\n";
	
	
	return 0;
}	//end
